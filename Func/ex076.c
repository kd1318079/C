#include<stdio.h>
void goukei(int a, int b, int* wa, float* heikin);
main()
{
	int a, b, c;
	float d;
	printf("®”‚ğ2‚Â“ü—ÍF");
	scanf("%d%d", &a, &b);
	goukei(a, b, &c, &d);
	printf("‡Œv=%dA•½‹Ï=%.2f", c, d);
}
void goukei(int a, int b, int* wa, float* heikin) {
	*wa = a + b;
	*heikin = (a + b) / 2.0;
}