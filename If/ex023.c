#include<stdio.h>
main()
{
	int h,m,s,Se;
	printf("秒数を入力:");
	scanf("%d", &Se);
	if (Se <= 5000) {
		/*h = s / 3600;
		s = s % 3600;
		m = s / 60;
		s = s % 60;
		printf(" %d時間 %d分 %d秒です", h, m, s);*/
		printf(" %d時間 %d分 %d秒です", Se / 3600, Se % 3600 / 60, Se % 60 % 60);
	}
	else printf("エラー");
	}