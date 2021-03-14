#pragma once
#include<stdio.h>
#include<time.h>
#include<stdlib.h>

#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2
#define EASY_COUNT 80

void Initboard(char board[ROWS][COLS],int rows,int cols,char set);
void Displayboard(char board[ROWS][COLS], int row, int col);
void Setmine(char board[ROWS][COLS], int row, int col);
void Findmine(char mine[ROWS][COLS], char show[ROWS][COLS],int row,int col);
