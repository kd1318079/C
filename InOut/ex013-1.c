#include<stdio.h>
main()
{
	char moji, moji2;
	int kotae;
	moji = '5', moji2 = '6';
	kotae = (moji - 0x30) * (moji2 - 0x30);
	printf(" %x * %x = %d \n", moji - 0x30, moji2 - 0x30, kotae);
}