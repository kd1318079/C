#include<stdio.h>
void shisoku(int x, int y, int* wa, int* sa, int* sk, int* sho ,int *amari);
main()
{
	int a, b, c, d, e, f,g;
	printf("���l1�H:");
	scanf("%d,", &a);
	printf("���l2�H:");
	scanf("%d,", &b);
	shisoku(a, b, &c, &d, &e, &f,&g);
	puts("���l�Ɛ��l�̎l�����Z");
	printf("wa=%d sa=%d seki=%d syou=%d amari=%d\n",c,d,e,f,g);
}

void shisoku(int x, int y, int* wa, int* sa, int* sk, int* sho,int *amari) {
	*wa = x + y;
	*sa = x - y;
	*sk = x * y;
	*sho = x / y;
	*amari = x % y;
}