#include<stdio.h>
main()
{
	int c,i=0,sum=0;
	printf("��������͂��Ă�������(Ctrl+z�ŏI��)");
	while (scanf("%d" ,&c) != EOF) {
		sum += c;
		i++;
		printf("����:");
	}
	printf("���v:%d\t����:%.2f", sum, (float)sum / i);
}