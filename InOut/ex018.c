#include<stdio.h>
main()
{
int a, b, c, goukei;
	printf("�������O����:\n");
	scanf ("%d%d%d", &a,&b,&c);
	goukei = a + b + c;
	//printf("���v=%d ����=%.2f\n", goukei,goukei / 3.0);
	printf("���v=%d ����=%.2f\n", goukei,(float)goukei / 3);
}