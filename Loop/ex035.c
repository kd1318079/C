#include<stdio.h>
main()
{
	int a=0,sum=0;
	while (1) {
		printf("数を入れて:");
		scanf("%d", &a);
		if (a == -999) break;
		
		sum += a;
	}printf("合計=%d", sum);
	
}