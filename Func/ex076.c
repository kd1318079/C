#include<stdio.h>
void goukei(int a, int b, int* wa, float* heikin);
main()
{
	int a, b, c;
	float d;
	printf("整数を2つ入力：");
	scanf("%d%d", &a, &b);
	goukei(a, b, &c, &d);
	printf("合計=%d、平均=%.2f", c, d);
}
void goukei(int a, int b, int* wa, float* heikin) {
	*wa = a + b;
	*heikin = (a + b) / 2.0;
}