#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int a,k;
	srand(time(0));
	rand();
	k = rand() % 3 + 1;
	printf("���������܂����H\n1:�O�[ 2:�`���L 3:�p�|");
	scanf("%d", &a);
	if (a == 1) {
		printf("�v���C���[�́A�O�[�ł��B");
		if (k == 1) {
			printf("�R���s���[�^�[�́A�O�[�ł��B");
			printf("\n\n�������ł�");
		}
		if (k == 2) {
			printf("�R���s���[�^�[�́A�`���L�ł��B");
			printf("\n\n�v���C���[�̏����ł�");
		}
		if (k == 3) {
			printf("�R���s���[�^�[�́A�p�[�ł��B");
			printf("\n\n�v���C���[�̕����ł�");
		}
	}
	if (a == 2) {
		printf("�v���C���[�́A�`���L�ł��B");
		if (k == 1) {
			printf("�R���s���[�^�[�́A�O�[�ł��B");
			printf("\n\n�v���C���[�̕����ł�");
		}
		if (k == 2) {
			printf("�R���s���[�^�[�́A�`���L�ł��B");
			printf("\n\n�������ł�");
		}
		if (k == 3) {
			printf("�R���s���[�^�[�́A�p�[�ł��B");
			printf("\n\n�v���C���[�̏����ł�");
		}
	}
		if (a == 3) {
			printf("�v���C���[�́A�p�[�ł��B");
			if (k == 1) {
				printf("�R���s���[�^�[�́A�O�[�ł��B");
				printf("\n\n�v���C���[�̏����ł�");
			}
			if (k == 2) {
				printf("�R���s���[�^�[�́A�`���L�ł��B");
				printf("\n\n�v���C���[�̕����ł�");
			}
			if (k == 3) {
				printf("�R���s���[�^�[�́A�p�[�ł��B");
				printf("\n\n�������ł��B");
			}
		}
}