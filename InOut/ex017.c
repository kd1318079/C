#include<stdio.h>
main()
{
	int a, b, c;
	printf("一つ目の実数:");
	scanf("%d", &a);
	printf("二つ目の実数:");
	scanf("%d", &b);
	printf("三つ目の実数:");
	scanf("%d", &c);
	printf("合計=%d ,平均=%d", a + b + c, (a + b + c)/3);
}