#ifndef GAME2048_H
#define GAME2048_H

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include <conio.h>

#define SIZE 4					// ���� ũ�� (4x4)
#define BOARD_SIZE 4			// ���� ũ�� (�ߺ� ����)
#define WIN_TILE 2048			// �¸� ���� Ÿ�� ��
#define INITIAL_TILE_COUNT 2	// �ʱ� Ÿ�� ����

// ���� ���� ����
extern int board[SIZE][SIZE];

// �Լ� �����
void initBoard_1313();					// ���� �ʱ�ȭ �Լ�
void generateTile_1310();				// �� Ÿ�� ���� �Լ�
bool moveTiles_1315(char direction);		// Ÿ�� �̵� �Լ�
void mergeTiles_1308(int line[SIZE]);	// Ÿ�� ���� �Լ�
bool checkGameOver_1310();				// ���� ���� Ȯ�� �Լ�
void printBoard_1308();					// ���� ��� �Լ�

#endif
#pragma once
