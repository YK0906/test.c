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
		printf("��ѡ��:>\n");
		scanf("%d", &input);
		switch(input)
		{
			case 1:
				game();
				break;
			case 0:
				printf("�˳���Ϸ\n");
				break;
			default:
				printf("ѡ�����������ѡ��\n");
				break;
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}