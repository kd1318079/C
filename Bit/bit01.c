#include"stdio.h"
enum Bitstate
{
	Base=0,				//00000000	通常
	Poison=1<<0,		//00000001	毒
	Sleep=1<<1,			//00000010	眠り
	Paralysis=1<<2,		//00000100	麻痺
	Burn=1<<3,			//00001000	やけど
	AtkUp=1<<4,			//00010000	攻撃↑
	AtkDown=1<<5		//00100000	攻撃↓
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
	printf("****現在の状態****\n");
	if (s & Poison) {
		printf("毒\n");
	}
	if (s & Sleep) {
		printf("眠り\n");
	}
	if (s & Paralysis) {
		printf("麻痺\n");
	}
	if (s & Burn) {
		printf("やけど\n");
	}
	if (s & AtkUp) {
		printf("攻撃力アップ\n");
	}
	if (s & Burn) {
		printf("攻撃力ダウン\n");
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
		printf("どの状態異常にしますか？");
		printf("1:毒 2:眠り 3:麻痺 4:火傷 5:攻撃↑ 6:攻撃↓ 0:終了");
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
		printf("どの状態を解除しますか");
		printf("1:毒 2:眠り 3:麻痺 4:火傷 5:攻撃↑ 6:攻撃↓ 0:終了");
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
