#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int a, k;
	srand(time(0));
	rand();
	k = rand() % 3 + 1;
	printf("���������܂����H\n1:�O�[ 2:�`���L 3:�p�|");
	scanf("%d", &a);
	if (a == k) {
		printf("�������ł�");
	}} 
}