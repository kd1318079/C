#include<stdio.h>
main()
{
	int h,m,s,Se;
	printf("�b�������:");
	scanf("%d", &Se);
	if (Se <= 5000) {
		/*h = s / 3600;
		s = s % 3600;
		m = s / 60;
		s = s % 60;
		printf(" %d���� %d�� %d�b�ł�", h, m, s);*/
		printf(" %d���� %d�� %d�b�ł�", Se / 3600, Se % 3600 / 60, Se % 60 % 60);
	}
	else printf("�G���[");
	}