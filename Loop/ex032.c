#include<stdio.h>
main()
{
	int suu,kake;
	printf("��������:");
	scanf("%d", &suu);
	for (kake = 1; kake <= 5; kake++) {
		printf("%d  ", suu * kake);
	}
}