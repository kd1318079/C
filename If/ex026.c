#include<stdio.h>
main()
{
	int m;
	printf("�������:");
	scanf("%d", &m);
	if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 12) {
		printf("�ŏI����31���ł�");
	}
	else {
		if (m == 4 || m == 6 || m == 9 || m == 11) {
			printf("�ŏI����30���ł�");
		}
		else {
			if (m == 2) {
				printf("�ŏI����28���ł�");
			}
			else {
				printf("1�`12����͂��Ă�������");
			}
		}
	}
}