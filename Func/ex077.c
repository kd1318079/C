#include<stdio.h>
int daisyou(int a,int b,int c,int* max,int* min);
main()
{
	int a, b, c;
	int e, f;
	printf("整数を3つ入力");
	scanf("%d%d%d", &a, &b, &c);
	e = a;
	f = c;
	daisyou(a,b,c,&e,&f);
	printf("最大値=%d　最小値=%d", e, f);
}
int daisyou(int a,int b,int c,int* max, int* min) {
	if (a < b||a<c) {
		*max = b;
		if (b < c) {
			*max = c;
		}
	}else{}
	if (c > b||c>a) {
		*min = b;
		if (b > a) {
			*min = a;
		}
	}
}