#include<stdio.h>
main()
{
	char c,c1;
	printf("��������́F");
	scanf("%c", &c);
	if (c>='A' && c<='Z') {
		printf("�啶���ł�");
	}
	else {
		printf("���̑��̕����ł�");
	}
	/*
	c1 = c - 0x41;
	//printf("%x", c1);
	if (c1 < 0x1A) {
		if (c1 >= 0) {
			printf("�啶���ł�");
		}
		else
		{
			printf("���̑��̕����ł�");
		}
	}
	else {
		printf("���̑��̕����ł�");
	}*/
}