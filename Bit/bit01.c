#include"stdio.h"
enum Bitstate
{
	Base=0,				//00000000	’Êí
	Poison=1<<0,		//00000001	“Å
	Sleep=1<<1,			//00000010	–°‚è
	Paralysis=1<<2,		//00000100	–ƒáƒ
	Burn=1<<3,			//00001000	‚â‚¯‚Ç
	AtkUp=1<<4,			//00010000	UŒ‚ª
	AtkDown=1<<5		//00100000	UŒ‚«
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
	printf("****Œ»İ‚Ìó‘Ô****\n");
	if (s & Poison) {
		printf("“Å\n");
	}
	if (s & Sleep) {
		printf("–°‚è\n");
	}
	if (s & Paralysis) {
		printf("–ƒáƒ\n");
	}
	if (s & Burn) {
		printf("‚â‚¯‚Ç\n");
	}
	if (s & AtkUp) {
		printf("UŒ‚—ÍƒAƒbƒv\n");
	}
	if (s & Burn) {
		printf("UŒ‚—Íƒ_ƒEƒ“\n");
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
		printf("‚Ç‚Ìó‘ÔˆÙí‚É‚µ‚Ü‚·‚©H");
		printf("1:“Å 2:–°‚è 3:–ƒáƒ 4:‰Î 5:UŒ‚ª 6:UŒ‚« 0:I—¹");
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
		printf("‚Ç‚Ìó‘Ô‚ğ‰ğœ‚µ‚Ü‚·‚©");
		printf("1:“Å 2:–°‚è 3:–ƒáƒ 4:‰Î 5:UŒ‚ª 6:UŒ‚« 0:I—¹");
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
