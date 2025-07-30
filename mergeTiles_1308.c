#include "game2048.h"

void mergeTiles_1308(int line[SIZE]) {
    int temp[SIZE] = { 0 };
    int final[SIZE] = { 0 };
    int idx = 0;

    // 1. 모든 0이 아닌 숫자를 왼쪽으로 이동
    for (int i = 0; i < SIZE; i++) {
        if (line[i] != 0) {
            temp[idx++] = line[i];
        }
    }

    //  2. 인접한 동일한 숫자들을 병합
    for (int i = 0; i < SIZE - 1; i++) {
        if (temp[i] != 0 && temp[i] == temp[i + 1]) {
            temp[i] *= 2;
            temp[i + 1] = 0;
        }
    }

    // 3. 병합된 숫자들을 다시 왼쪽으로 이동
    idx = 0;
    for (int i = 0; i < SIZE; i++) {
        if (temp[i] != 0) {
            final[idx++] = temp[i];
        }
    }

    for (int i = 0; i < SIZE; i++) {
        line[i] = final[i];
    }
}