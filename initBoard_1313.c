#include "game2048.h"

// 게임 보드를 초기화하는 함수
void initBoard_1313() {
    // 랜덤 숫자 생성을 위한 시드 초기화 (현재 시간 사용)
    srand((unsigned int)time(NULL));
    // 4x4 보드의 모든 칸을 순회하며 초기화
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            // 주대각선 위치 확인 (왼쪽 위에서 오른쪽 아래로)
            if (i == j) {
                board[i][j] = 0; // 주대각선 칸을 빈 칸으로 설정
            }
             //반대각선 위치 확인 (오른쪽 위에서 왼쪽 아래로)
            else if (i + j == SIZE - 1) {
                board[i][j] = 0; // 반대각선 칸을 빈 칸으로 설정
            }
            // 나머지 모든 칸
            else {
                board[i][j] = 0; // 나머지 칸들도 빈 칸으로 설정
            }
        }
    }

    // 게임 시작을 위해 초기 타일 2개를 랜덤 위치에 생성
    generateTile_1310(); // 첫 번째 타일 생성 (보통 2 또는 4)
    generateTile_1310(); // 두 번째 타일 생성 (보통 2 또는 4)
}