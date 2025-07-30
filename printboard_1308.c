#include "game2048.h"

// 게임 보드를 화면에 출력하는 함수
void printBoard_1308() {
    system("cls");  // 화면 지우기 (Windows 명령어)
    
    // 게임 제목 출력
    printf("\n===== 2048 Game =====\n\n");

    // 보드 상단 경계선 출력
    printf("+----+----+----+----+\n");

    // 4x4 보드의 각 행을 순회하며 출력
    for (int i = 0; i < SIZE; i++) {
        printf("|");    // 행의 시작 구분선
        
        // 각 열의 값을 출력
        for (int j = 0; j < SIZE; j++) {
            
            // 빈 칸(0)인 경우 공백으로 표시
            if (board[i][j] == 0) {
                printf("    |");
            }
            else {
                // 숫자가 있는 경우 4자리 우측 정렬로 출력
                printf("%4d|", board[i][j]);
            }
        }
        printf("\n");   // 행 끝에서 줄바꿈

        // 마지막 행이 아닌 경우 중간 구분선 출력
        if (i < SIZE - 1) {
            printf("+----+----+----+----+\n");
        }
    }
    // 보드 하단 경계선 출력
    printf("+----+----+----+----+\n\n");

    // 게임 조작법 안내 메시지 출력
    printf("Controls: W(UP) A(LEFT) S(DOWN) D(RIGHT)\n");
    printf("Press any key to move\n\n");
}