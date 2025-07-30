#include "game2048.h"

bool moveTiles_1315(char direction) {
    int backup[SIZE][SIZE];
    bool moved = false;

    // ���� ���� ������ ��� ����
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            backup[i][j] = board[i][j];
        }
    }

    // ���⿡ ���� �� ��/�� ó��
    for (int i = 0; i < SIZE; i++) {
        int line[SIZE];

        switch (direction) {
        case 'a': // �������� �̵�
            for (int j = 0; j < SIZE; j++) {
                line[j] = board[i][j];
            }
            mergeTiles_1308(line);
            for (int j = 0; j < SIZE; j++) {
                board[i][j] = line[j];
            }
            break;

        case 'd': // ���������� �̵�
            for (int j = 0; j < SIZE; j++) {
                line[j] = board[i][SIZE - 1 - j];
            }
            mergeTiles_1308(line);
            for (int j = 0; j < SIZE; j++) {
                board[i][SIZE - 1 - j] = line[j];
            }
            break;

        case 'w': // ���� �̵�
            for (int j = 0; j < SIZE; j++) {
                line[j] = board[j][i];
            }
            mergeTiles_1308(line);
            for (int j = 0; j < SIZE; j++) {
                board[j][i] = line[j];
            }
            break;

        case 's': // �Ʒ��� �̵�
            for (int j = 0; j < SIZE; j++) {
                line[j] = board[SIZE - 1 - j][i];
            }
            mergeTiles_1308(line);
            for (int j = 0; j < SIZE; j++) {
                board[SIZE - 1 - j][i] = line[j];
            }
            break;

        default:
            return false;
        }
    }

    // ���尡 ����Ǿ����� Ȯ�� (�ζ��� isDifferent ����)
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (backup[i][j] != board[i][j]) {
                moved = true;
                break;
            }
        }
        if (moved) break;
    }

    if (moved) {
        generateTile_1310();
    }

    return moved;
}