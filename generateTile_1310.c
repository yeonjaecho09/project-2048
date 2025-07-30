#include "game2048.h"

void generateTile_1310() {
    int emptyTiles[SIZE * SIZE][2]; // �� Ÿ���� ��ǥ�� ����
    int emptyCount = 0;

    // 1. ��� �� Ÿ�� ã��
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (board[i][j] == 0) {
                emptyTiles[emptyCount][0] = i;
                emptyTiles[emptyCount][1] = j;
                emptyCount++;
            }
        }
    }

    // 2. �� Ÿ���� ������ ��ȯ
    if (emptyCount == 0) return;

    // 3. ������ �� Ÿ�� ����
    int randomIndex = rand() % emptyCount;
    int x = emptyTiles[randomIndex][0];
    int y = emptyTiles[randomIndex][1];

    // 4. Ÿ�� ����: 90% Ȯ���� 2, 10% Ȯ���� 4
    int tileValue = (rand() % 10 == 0) ? 4 : 2;
    board[x][y] = tileValue;
}