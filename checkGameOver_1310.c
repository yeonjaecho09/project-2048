#include "game2048.h"

bool checkGameOver_1310() {
    // 1. 2048 Ÿ�� Ȯ�� (�¸� ����)
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (board[i][j] == 2048) {
                printf("Congratulations! You reached 2048! You win!\n");
                return true;
            }
        }
    }

    // 2. �� Ÿ�� Ȯ��
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (board[i][j] == 0) {
                return false; // �� Ÿ���� ������ ���� ���
            }
        }
    }

    // 3. ��ĥ �� �ִ� Ÿ�� Ȯ��
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            //  ������ �̿� Ȯ��
            if (j < SIZE - 1 && board[i][j] == board[i][j + 1]) {
                return false; // �������� ��ġ�� ����
            }
            // �Ʒ��� �̿� Ȯ��
            if (i < SIZE - 1 && board[i][j] == board[i + 1][j]) {
                return false; // �������� ��ġ�� ����
            }
        }
    }

    // �� �̻� �̵��� �� ���� - ���� ����
    printf("Game Over! No more moves possible.\n");
    return true;
}