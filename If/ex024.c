#include<stdio.h>
main()
{
	char c,c1;
	printf("•¶Žš‚ð“ü—ÍF");
	scanf("%c", &c);
	if (c>='A' && c<='Z') {
		printf("‘å•¶Žš‚Å‚·");
	}
	else {
		printf("‚»‚Ì‘¼‚Ì•¶Žš‚Å‚·");
	}
	/*
	c1 = c - 0x41;
	//printf("%x", c1);
	if (c1 < 0x1A) {
		if (c1 >= 0) {
			printf("‘å•¶Žš‚Å‚·");
		}
		else
		{
			printf("‚»‚Ì‘¼‚Ì•¶Žš‚Å‚·");
		}
	}
	else {
		printf("‚»‚Ì‘¼‚Ì•¶Žš‚Å‚·");
	}*/
}