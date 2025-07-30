#include "game2048.h"

// ���� ���带 ȭ�鿡 ����ϴ� �Լ�
void printBoard_1308() {
    system("cls");  // ȭ�� ����� (Windows ��ɾ�)
    
    // ���� ���� ���
    printf("\n===== 2048 Game =====\n\n");

    // ���� ��� ��輱 ���
    printf("+----+----+----+----+\n");

    // 4x4 ������ �� ���� ��ȸ�ϸ� ���
    for (int i = 0; i < SIZE; i++) {
        printf("|");    // ���� ���� ���м�
        
        // �� ���� ���� ���
        for (int j = 0; j < SIZE; j++) {
            
            // �� ĭ(0)�� ��� �������� ǥ��
            if (board[i][j] == 0) {
                printf("    |");
            }
            else {
                // ���ڰ� �ִ� ��� 4�ڸ� ���� ���ķ� ���
                printf("%4d|", board[i][j]);
            }
        }
        printf("\n");   // �� ������ �ٹٲ�

        // ������ ���� �ƴ� ��� �߰� ���м� ���
        if (i < SIZE - 1) {
            printf("+----+----+----+----+\n");
        }
    }
    // ���� �ϴ� ��輱 ���
    printf("+----+----+----+----+\n\n");

    // ���� ���۹� �ȳ� �޽��� ���
    printf("Controls: W(UP) A(LEFT) S(DOWN) D(RIGHT)\n");
    printf("Press any key to move\n\n");
}