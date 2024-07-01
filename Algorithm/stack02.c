#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

const int SX=1;
const int SY=1;

const int GX=8;
const int GY=1;
int map[7][10] = {
	{1,1,1,1,1,1,1,1,1,1},
	{1,0,0,0,0,0,1,0,0,1},
	{1,0,1,0,1,0,0,0,1,1},
	{1,0,0,1,0,0,0,1,0,1},
	{1,1,0,1,0,1,0,1,0,1},
	{1,0,0,0,0,1,0,0,0,1},
	{1,1,1,1,1,1,1,1,1,1},
};

#define QUEUESIZE 46
int queue[QUEUESIZE];
int head = 0;
int tail = 0;

void DrawMaze(int x, int y);
int enqueue(int d);
int dequeue(int* pd);
int susumu(int x,int y);

main()
{
	system("cls");
	printf("�����̏�Ԃ�\��\n");
	DrawMaze(-1, -1);
	printf("�uEnter�v�L�[:�������s\n");
	getch();

	susumu(SX, SY);

	system("cls");
	printf("�Ō�̏�Ԃ�\��\n");
	DrawMaze(-1, -1);
}

void DrawMaze(int x, int y) {
	int i, j;

	for (i = 0; i < 7; i++) {
		for (j = 0; j < 10; j++) {
			if (i == y && j == x) {
				printf("�l");
			}
			else if (i == SY && j == SX) {
				printf("�r");
			}
			else if (i == GY && j == GX) {
				printf("�f");
			}
			else if (map[i][j] == 1) {
				printf("�l");
			}
			else if (map[i][j] == 2) {
				printf("�E");
			}
			else {
				printf("�@");
			}
		}
		printf("\n");
	}
	return ;
}

int enqueue(int d) {
	if ((tail+1)% QUEUESIZE==head) { return -1; }
	queue[tail] = d;
	tail++;
	tail = tail % QUEUESIZE;

	return 0;
}

int dequeue(int* pd) {
	if (head == tail) { return -1; }
	*pd = queue[head];
	queue[head] = 0;
	head++;
	head = head % QUEUESIZE;
	return 0;
}

int susumu(int x, int y) {
	int i;
		while (1) {
			system("cls");
			printf("�T���r���̏󋵂�\���@�u�l�v���T���r���̈ʒu\n");
			DrawMaze(x, y);
			printf("�u�G���^�[�L�[�v:�������s\n");
			getch();
			map[y][x] = 2;

			if (x == GX && y == GY) { return 0; }

			if (map[y - 1][x] == 0) { enqueue(x); enqueue(y - 1); }
			if (map[y + 1][x] == 0) { enqueue(x); enqueue(y + 1); }
			if (map[y][x - 1] == 0) { enqueue(x - 1); enqueue(y); }
			if (map[y][x + 1] == 0) { enqueue(x + 1); enqueue(y); }
			dequeue(&x);
			if(dequeue(&y)==-1){return -1;}
		}
}