#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int a, k, i;
	srand(time(0));
	rand();
	k = rand() % 1000 + 1;
	printf("�P�`1000�̒��ł�����̐���\�z���Ă�������");

	for (i = 0,a=0; k != a; i++) {
		printf("������̐��́H->");
		scanf("%d", &a);

		if (k < a) {
			printf("������̐����傫���ł�\n");
		}
		else {
			if (k > a) {
				printf("������̐���菬�����ł�\n");
			} 
		}
	}
	printf("����%d��ڂł�����܂���",i);


}