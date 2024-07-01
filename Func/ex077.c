#include<stdio.h>
int daisyou(int a,int b,int c,int* max,int* min);
main()
{
	int a, b, c;
	int e, f;
	printf("®”‚ğ3‚Â“ü—Í");
	scanf("%d%d%d", &a, &b, &c);
	e = a;
	f = c;
	daisyou(a,b,c,&e,&f);
	printf("Å‘å’l=%d@Å¬’l=%d", e, f);
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