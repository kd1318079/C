#include"stdio.h"
enum Bitstate
{
	Base=0,				//00000000	�ʏ�
	Poison=1<<0,		//00000001	��
	Sleep=1<<1,			//00000010	����
	Paralysis=1<<2,		//00000100	���
	Burn=1<<3,			//00001000	�₯��
	AtkUp=1<<4,			//00010000	�U����
	AtkDown=1<<5		//00100000	�U����
};
typedef unsigned int UINT;
void DisplayStates(UINT s);
void ChanngeFlag(UINT* s);
void ClearFlag(UINT* s);

main()
{
	UINT Mystate = Base;
	/*Mystate |= (Poison | Sleep);
	DisplayStates(Mystate);*/
	DisplayStates(Mystate);
	ChanngeFlag(&Mystate);
	DisplayStates(Mystate);
	ClearFlag(&Mystate);
	DisplayStates(Mystate);
}

void DisplayStates(UINT s)
{
	printf("****���݂̏��****\n");
	if (s & Poison) {
		printf("��\n");
	}
	if (s & Sleep) {
		printf("����\n");
	}
	if (s & Paralysis) {
		printf("���\n");
	}
	if (s & Burn) {
		printf("�₯��\n");
	}
	if (s & AtkUp) {
		printf("�U���̓A�b�v\n");
	}
	if (s & Burn) {
		printf("�U���̓_�E��\n");
	}
	for (int i = 0; i < 18; i++) {
		printf("*");
	}
	printf("\n");
}

void ChanngeFlag(UINT* s)
{
	int a;
	while (1) {
		printf("�ǂ̏�Ԉُ�ɂ��܂����H");
		printf("1:�� 2:���� 3:��� 4:�Ώ� 5:�U���� 6:�U���� 0:�I��");
		scanf("%d", &a);
		if (a == 0) break;
		switch (a) {
		case 1:*s |= Poison;
			break;
		case 2:*s |= Sleep;
			break;
		case 3:*s |= Paralysis;
			break;
		case 4:*s |= Burn;
			break;
		case 5:*s |= AtkUp;
			break;
		case 6:*s |= AtkDown;
			break;
		default:break;
		}
	}
}

void ClearFlag(UINT* s)
{
	int a;
	while (1) {
		printf("�ǂ̏�Ԃ��������܂���");
		printf("1:�� 2:���� 3:��� 4:�Ώ� 5:�U���� 6:�U���� 0:�I��");
		scanf("%d", &a);
		if (a == 0) break;
		switch (a) {
		case 1:*s &= ~Poison;
			break;
		case 2:*s &= ~Sleep;
			break;
		case 3:*s &= ~Paralysis;
			break;
		case 4:*s &= ~Burn;
			break;
		case 5:*s &= ~AtkUp;
			break;
		case 6:*s &= ~AtkDown;
			break;
		default:break;
		}
	}
}
