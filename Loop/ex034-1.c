#include<stdio.h>
main()
{
	int i;
	printf("����?");
	scanf("%d", &i);
	do {
		printf("*****\n");
		i--;
	} while (0 < i); 
}