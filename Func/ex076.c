#include<stdio.h>
void goukei(int a, int b, int* wa, float* heikin);
main()
{
	int a, b, c;
	float d;
	printf("������2���́F");
	scanf("%d%d", &a, &b);
	goukei(a, b, &c, &d);
	printf("���v=%d�A����=%.2f", c, d);
}
void goukei(int a, int b, int* wa, float* heikin) {
	*wa = a + b;
	*heikin = (a + b) / 2.0;
}