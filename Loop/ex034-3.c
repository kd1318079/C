#include<stdio.h>
main()
{
	int a,b=0,c=0;
	printf("”‚ÍH");
	scanf("%d", &a);//3s
	do {
		b++;
		do {
			printf("*");
			c++;
		} while (b > c);
		c = 0;
		printf("\n");
	} while (a > b);
}