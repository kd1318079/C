#include<stdio.h>
main()
{
	char c,c1;
	printf("文字を入力：");
	scanf("%c", &c);
	if (c>='A' && c<='Z') {
		printf("大文字です");
	}
	else {
		printf("その他の文字です");
	}
	/*
	c1 = c - 0x41;
	//printf("%x", c1);
	if (c1 < 0x1A) {
		if (c1 >= 0) {
			printf("大文字です");
		}
		else
		{
			printf("その他の文字です");
		}
	}
	else {
		printf("その他の文字です");
	}*/
}