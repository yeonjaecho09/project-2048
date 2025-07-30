#ifndef GAME2048_H
#define GAME2048_H

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include <conio.h>

#define SIZE 4					// 보드 크기 (4x4)
#define BOARD_SIZE 4			// 보드 크기 (중복 정의)
#define WIN_TILE 2048			// 승리 조건 타일 값
#define INITIAL_TILE_COUNT 2	// 초기 타일 개수

// 전역 게임 보드
extern int board[SIZE][SIZE];

// 함수 선언부
void initBoard_1313();					// 보드 초기화 함수
void generateTile_1310();				// 새 타일 생성 함수
bool moveTiles_1315(char direction);		// 타일 이동 함수
void mergeTiles_1308(int line[SIZE]);	// 타일 병합 함수
bool checkGameOver_1310();				// 게임 종료 확인 함수
void printBoard_1308();					// 보드 출력 함수

#endif
#pragma once
