#include<stdio.h>
main()
{
int a, b, c, goukei;
	printf("整数を三個入力:\n");
	scanf ("%d%d%d", &a,&b,&c);
	goukei = a + b + c;
	//printf("合計=%d 平均=%.2f\n", goukei,goukei / 3.0);
	printf("合計=%d 平均=%.2f\n", goukei,(float)goukei / 3);
}