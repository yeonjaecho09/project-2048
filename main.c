#include "game2048.h"

// 4x4 ���� ���带 �����ϴ� ���� �迭
int board[SIZE][SIZE];

int main() {
    char userInput;             // ����� �Է��� ������ ����
    bool isGameRunning = true;  // ���� ���� ���¸� ��Ÿ���� �÷���
    
    // ���� ���� �޽��� ���
    printf("Welcome to 2048!\n");
    printf("Press any key to start...\n");
    _getch(); // ����ڰ� Ű�� ���� ������ ���

    // ���� ���� �ʱ�ȭ �� ȭ�鿡 ���
    initBoard_1313();
    printBoard_1308();

    // ���� ���� ���� - ������ ���� ������ �ݺ�
    while (isGameRunning) {
        printf("Your move: ");
        userInput = _getch(); // ����� �Է� �ޱ� (ȭ�鿡 ǥ�õ��� ����)

        // �빮�ڸ� �ҹ��ڷ� ��ȯ (A-Z�� a-z��)
        if (userInput >= 'A' && userInput <= 'Z') {
            userInput = userInput + 32;
        }
        
        // ����� �Է¿� ���� ���� ó��
        switch (userInput) {
        case 'w':   // ���� �̵�
            printf("UP\n");
            if (moveTiles_1315(userInput)) { // Ÿ�� �̵��� ������ ���
                printBoard_1308();           // ���� �ٽ� ���
                if (checkGameOver_1310()) {  // ���� ���� ���� Ȯ��
                    isGameRunning = false;
                }
            }
            else {  // �̵��� �� ���� ���
                printf("Can't move\n");
                _getch();    // ����ڰ� Ű�� ���� ������ ���
                printBoard_1308();
            }
            break;

        case 'a':   // ���� �̵�
            printf("LEFT\n");
            if (moveTiles_1315(userInput)) { // Ÿ�� �̵��� ������ ���
                printBoard_1308();           // ���� �ٽ� ���
                if (checkGameOver_1310()) {  // ���� ���� ���� Ȯ��
                    isGameRunning = false;
                }
            }
            else {  // �̵��� �� ���� ���
                printf("Can't move\n");
                _getch();    // ����ڰ� Ű�� ���� ������ ���
                printBoard_1308();
            }
            break;

        case 's'://�Ʒ��� �̵�
            printf("DOWN\n");
            if (moveTiles_1315(userInput)) { // Ÿ�� �̵��� ������ ���
                printBoard_1308();           // ���� �ٽ� ���
                if (checkGameOver_1310()) {  //���� ���� ���� Ȯ��
                    isGameRunning = false;
                }
            }
            else {   // �̵��� �� ���� ���
                printf("Can't move\n");
                _getch(); // ����ڰ� Ű�� ���� ������ ���
                printBoard_1308();
            }
            break;

        case 'd': //������
            printf("RIGHT\n");
            if (moveTiles_1315(userInput)) { //Ÿ�� �̵��� ������ ���
                printBoard_1308();           //���� �ٽ� ���
                if (checkGameOver_1310()) {  //���� ���� ���� Ȯ��
                    isGameRunning = false;
                }
            }
            else {  //�̵��� �� ���� ���
                printf("Can't move\n");
                _getch();   //����ڰ� Ű�� ���� ������ ���
                printBoard_1308();
            }
            break;

        default:  // �߸��� Ű �Է� ó��
            printf("Invalid key! Use W/A/S/D or Q\n");
            printf("Press any key to continue...");
            _getch();   // ����ڰ� Ű�� ���� ������ ���
            printBoard_1308();   // ���� �ٽ� ���
            break;  
        }
    }

    return 0;  // ���α׷� ���� ����
}