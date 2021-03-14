#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
void game()
{
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	Initboard(mine, ROWS, COLS, '0');
	Initboard(show, ROWS, COLS, '*');
	//Displayboard(mine,ROW,COL);
	Displayboard(show, ROW, COL);
	Setmine(mine, ROW, COL);
	//Displayboard(mine, ROW, COL);
	Displayboard(mine, ROW, COL);
	Findmine(mine, show, ROW, COL);
}
void menu()
{
	printf("***************************************\n");
	printf("********** 1. play   0. exit***********\n");
	printf("***************************************\n");
}
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择:>\n");
		scanf("%d", &input);
		switch(input)
		{
			case 1:
				game();
				break;
			case 0:
				printf("退出游戏\n");
				break;
			default:
				printf("选择错误，请重新选择！\n");
				break;
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}