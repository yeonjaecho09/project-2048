#include "game2048.h"

bool checkGameOver_1310() {
    // 1. 2048 타일 확인 (승리 조건)
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (board[i][j] == 2048) {
                printf("Congratulations! You reached 2048! You win!\n");
                return true;
            }
        }
    }

    // 2. 빈 타일 확인
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (board[i][j] == 0) {
                return false; // 빈 타일이 있으면 게임 계속
            }
        }
    }

    // 3. 합칠 수 있는 타일 확인
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            //  오른쪽 이웃 확인
            if (j < SIZE - 1 && board[i][j] == board[i][j + 1]) {
                return false; // 수평으로 합치기 가능
            }
            // 아래쪽 이웃 확인
            if (i < SIZE - 1 && board[i][j] == board[i + 1][j]) {
                return false; // 수직으로 합치기 가능
            }
        }
    }

    // 더 이상 이동할 수 없음 - 게임 오버
    printf("Game Over! No more moves possible.\n");
    return true;
}