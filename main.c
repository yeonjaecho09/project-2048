#include "game2048.h"

// 4x4 게임 보드를 저장하는 전역 배열
int board[SIZE][SIZE];

int main() {
    char userInput;             // 사용자 입력을 저장할 변수
    bool isGameRunning = true;  // 게임 실행 상태를 나타내는 플래그
    
    // 게임 시작 메시지 출력
    printf("Welcome to 2048!\n");
    printf("Press any key to start...\n");
    _getch(); // 사용자가 키를 누를 때까지 대기

    // 게임 보드 초기화 및 화면에 출력
    initBoard_1313();
    printBoard_1308();

    // 메인 게임 루프 - 게임이 끝날 때까지 반복
    while (isGameRunning) {
        printf("Your move: ");
        userInput = _getch(); // 사용자 입력 받기 (화면에 표시되지 않음)

        // 대문자를 소문자로 변환 (A-Z를 a-z로)
        if (userInput >= 'A' && userInput <= 'Z') {
            userInput = userInput + 32;
        }
        
        // 사용자 입력에 따른 동작 처리
        switch (userInput) {
        case 'w':   // 위쪽 이동
            printf("UP\n");
            if (moveTiles_1315(userInput)) { // 타일 이동이 성공한 경우
                printBoard_1308();           // 보드 다시 출력
                if (checkGameOver_1310()) {  // 게임 종료 조건 확인
                    isGameRunning = false;
                }
            }
            else {  // 이동할 수 없는 경우
                printf("Can't move\n");
                _getch();    // 사용자가 키를 누를 때까지 대기
                printBoard_1308();
            }
            break;

        case 'a':   // 왼쪽 이동
            printf("LEFT\n");
            if (moveTiles_1315(userInput)) { // 타일 이동이 성공한 경우
                printBoard_1308();           // 보드 다시 출력
                if (checkGameOver_1310()) {  // 게임 종료 조건 확인
                    isGameRunning = false;
                }
            }
            else {  // 이동할 수 없는 경우
                printf("Can't move\n");
                _getch();    // 사용자가 키를 누를 때까지 대기
                printBoard_1308();
            }
            break;

        case 's'://아래쪽 이동
            printf("DOWN\n");
            if (moveTiles_1315(userInput)) { // 타일 이동이 성공한 경우
                printBoard_1308();           // 보드 다시 출력
                if (checkGameOver_1310()) {  //게임 종료 조건 확인
                    isGameRunning = false;
                }
            }
            else {   // 이동할 수 없는 경우
                printf("Can't move\n");
                _getch(); // 사용자가 키를 누를 때까지 대기
                printBoard_1308();
            }
            break;

        case 'd': //오른쪽
            printf("RIGHT\n");
            if (moveTiles_1315(userInput)) { //타일 이동이 성공한 경우
                printBoard_1308();           //보드 다시 출력
                if (checkGameOver_1310()) {  //게임 종료 조건 확인
                    isGameRunning = false;
                }
            }
            else {  //이동할 수 없는 경우
                printf("Can't move\n");
                _getch();   //사용자가 키를 누를 때까지 대기
                printBoard_1308();
            }
            break;

        default:  // 잘못된 키 입력 처리
            printf("Invalid key! Use W/A/S/D or Q\n");
            printf("Press any key to continue...");
            _getch();   // 사용자가 키를 누를 때까지 대기
            printBoard_1308();   // 보드 다시 출력
            break;  
        }
    }

    return 0;  // 프로그램 정상 종료
}