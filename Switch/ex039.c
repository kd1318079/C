#include<stdio.h>
main()
{
	char d;
	int a, b, c;
	printf("���������");
	scanf("%c", &d);
	printf("������3����");
	scanf("%d%d%d", &a,&b,&c);
	//if (d < 'Z') {
		//d += 0x20;	}
	switch (d) {
	case 'D':
	case 'd':
		if (a >= b) {
			if (a >= c) {
				printf("�ő�l��%d�ł�", a);
			}
		}
		if (b >= c) {
			if (c >= a) {
				printf("�ő�l��%d�ł�", b);
			}
		}
		if (c >= a) {
			if (c >= b) {
				printf("�ő�l��%d�ł�", c);
			}
		}break;
	case 'S':
	case 's':
		if (a <= b) {
			if (a <= c) {
				printf("�ŏ��l��%d�ł�", a);
			}
		}
		if (b <= c) {
			if (c <= a) {
				printf("�ŏ��l��%d�ł�", b);
			}
		}
		if (c <= a) {
			if (c <= b) {
				printf("�ŏ��l��%d�ł�", c);
			}
		}break;
	case 'G':
	case 'g':
		printf("���v��%d�ł�",a+b+c); break;
	case 'H':
	case 'h':
		printf("���ς�%.2f�ł�",(float)(a+b+c)/3); break;
	}
}