#include<stdio.h>
#define DATA_END 9

struct ken {
	int code;
	char name[20];
	struct ken *next;
};
main() {
	struct ken ken_data[101] = { 1,"�k�C��",NULL };			//[0]��1
	struct ken* p, * wp;
	int a, b;
	char c[20];
	p = wp = ken_data;
	do {
		printf("���j���[\n1�F�\��\t2�F�ǉ�\t3�F�폜\t9�F�I��\n");
		scanf("%d", &a);
		do {
			p++;
			wp->next = p;
			wp = p;
		} while (p->code != DATA_END);
		if (a == 1) {
			printf("�\�������͂���܂���");
			for (p = ken_data; p->code != DATA_END; p = p->next) {
				printf("code=%d\tname=%s\n", p->code, p->name);
			}
		}
		if (a == 2) {
			printf("�ǉ������͂���܂���");
			printf("�ǉ��������ԍ��ƕ�������͂��Ă�������");
			do {
				scanf("%d", &b);
				if (b == 1) {
					printf("�ŏ��̂̓f�[�^�͏㏑���ł��܂���");
				}
			} while (b == 1);
			scanf("%s", c);
			ken_data[b - 1].code = b;
			ken_data[b - 1].name = c;
			ken_data[b - 1].next = NULL;
		}
		if (a == 3) {
			printf("�폜�����͂���܂���");
			printf("�폜�������ԍ�����͂��Ă�������");
			scanf("%d", &b);
			ken_data[b - 1].code = " ";
			//ken_data[b - 1].name = " ";
			//ken_data[b - 1].next = NULL;
		}
	} while (a!=DATA_END);
}