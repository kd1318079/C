#include<stdio.h>
main()
{
	int a=0,sum=0;
	while (1) {
		printf("��������:");
		scanf("%d", &a);
		if (a == -999) break;
		
		sum += a;
	}printf("���v=%d", sum);
	
}