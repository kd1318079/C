#include<stdio.h>
main()
{
	int c,i=0,sum=0;
	printf("整数を入力してください(Ctrl+zで終了)");
	while (scanf("%d" ,&c) != EOF) {
		sum += c;
		i++;
		printf("整数:");
	}
	printf("合計:%d\t平均:%.2f", sum, (float)sum / i);
}