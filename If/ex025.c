#include<stdio.h>
main()
{
	char c;
	printf("���������:");
	scanf("%c", &c);
	if (c >= '0' && c <= '9') {
		printf("�����ł�");
	}
	else {
		//if (c <= 'A' && c <= 'Z') {
		if ((c >= 'A' && c <= 'Z')|| (c >= 'a' && c <= 'z')) {
			printf("�A���t�@�x�b�g�ł�");
		}
		else {
			printf("���̑��̕����ł�");
		}
		/*printf("�A���t�@�x�b�g�ł�");
	}
	else {
		if (c <= 'a' && c <= 'z') {
			printf("�A���t�@�x�b�g�ł�");
		}
		else {
			printf("���̑��̕����ł�");
		}
	}
}*/
	}
}