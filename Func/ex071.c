#include<stdio.h>
int goukei(int, int,int);
float heikin(int,int,int);
main()
{
	int a, b, c;
	printf("������3����:");
	scanf("%d%d%d", &a, &b, &c );

	printf("���v��%d�A���ς�%.2f", goukei(a,b,c), heikin(a,b,c));
}
int goukei(int a, int b, int c) {
	return a + b + c;
}
float heikin(int a, int b, int c) {
	return (float)(a+b+c)/3;
}