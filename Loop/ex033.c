#include<stdio.h>
main()
{
	int sum = 0, i, ave = 0;
	printf("����?");
	scanf("%d", &i);
	for (; i != -999; ave++) {
		sum += i;
		printf("����?");
		scanf("%d", &i);
	}
	printf("���v=%d ����=%.2f", sum, (float)sum / ave);
}