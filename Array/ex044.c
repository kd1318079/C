#include<stdio.h>
main()
{
	char a[10], b[10],w[10], i;
	printf("������1�����");
	scanf("%s", &a[0]);
	printf("������2�����");
	scanf("%s", &b[0]);
	printf("\nmoji1 = %s\tmoji2 = %s\n����ւ����\n", &a[0], &b[0]);
	for (i = 0; i < 10; i++) {
		w[i] = a[i];
		a[i] = b[i];
		b[i] = w[i];
	}
	printf("moji1 = %s\tmoji2 = %s", &a[0], &b[0]);
}