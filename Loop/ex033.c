#include<stdio.h>
main()
{
	int sum = 0, i, ave = 0;
	printf("数は?");
	scanf("%d", &i);
	for (; i != -999; ave++) {
		sum += i;
		printf("数は?");
		scanf("%d", &i);
	}
	printf("合計=%d 平均=%.2f", sum, (float)sum / ave);
}