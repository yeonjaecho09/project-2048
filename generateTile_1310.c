#include "game2048.h"

void generateTile_1310() {
    int emptyTiles[SIZE * SIZE][2]; // 빈 타일의 좌표를 저장
    int emptyCount = 0;

    // 1. 모든 빈 타일 찾기
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (board[i][j] == 0) {
                emptyTiles[emptyCount][0] = i;
                emptyTiles[emptyCount][1] = j;
                emptyCount++;
            }
        }
    }

    // 2. 빈 타일이 없으면 반환
    if (emptyCount == 0) return;

    // 3. 랜덤한 빈 타일 선택
    int randomIndex = rand() % emptyCount;
    int x = emptyTiles[randomIndex][0];
    int y = emptyTiles[randomIndex][1];

    // 4. 타일 생성: 90% 확률로 2, 10% 확률로 4
    int tileValue = (rand() % 10 == 0) ? 4 : 2;
    board[x][y] = tileValue;
}