#include<stdio.h>
main()
{
	int suu,kake;
	printf("数を入れて:");
	scanf("%d", &suu);
	for (kake = 1; kake <= 5; kake++) {
		printf("%d  ", suu * kake);
	}
}