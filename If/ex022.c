#include<stdio.h>
main()
{
	int no;
	printf("��������:");
	scanf("%d", &no);
	if (no < 1988) {
		printf("���a���܂�ł�\n");
	}
	else {
		if (no < 2019) {
			printf("�������܂�ł�\n");
		}
		else {
			printf("�ߘa���܂�ł�\n");
		}
		}
}