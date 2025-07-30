#include "game2048.h"

bool moveTiles_1315(char direction) {
    int backup[SIZE][SIZE];
    bool moved = false;

    // 현재 보드 상태의 백업 생성
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            backup[i][j] = board[i][j];
        }
    }

    // 방향에 따라 각 행/열 처리
    for (int i = 0; i < SIZE; i++) {
        int line[SIZE];

        switch (direction) {
        case 'a': // 왼쪽으로 이동
            for (int j = 0; j < SIZE; j++) {
                line[j] = board[i][j];
            }
            mergeTiles_1308(line);
            for (int j = 0; j < SIZE; j++) {
                board[i][j] = line[j];
            }
            break;

        case 'd': // 오른쪽으로 이동
            for (int j = 0; j < SIZE; j++) {
                line[j] = board[i][SIZE - 1 - j];
            }
            mergeTiles_1308(line);
            for (int j = 0; j < SIZE; j++) {
                board[i][SIZE - 1 - j] = line[j];
            }
            break;

        case 'w': // 위로 이동
            for (int j = 0; j < SIZE; j++) {
                line[j] = board[j][i];
            }
            mergeTiles_1308(line);
            for (int j = 0; j < SIZE; j++) {
                board[j][i] = line[j];
            }
            break;

        case 's': // 아래로 이동
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

    // 보드가 변경되었는지 확인 (인라인 isDifferent 로직)
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