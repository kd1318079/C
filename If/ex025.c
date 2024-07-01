#include<stdio.h>
main()
{
	char c;
	printf("文字を入力:");
	scanf("%c", &c);
	if (c >= '0' && c <= '9') {
		printf("数字です");
	}
	else {
		//if (c <= 'A' && c <= 'Z') {
		if ((c >= 'A' && c <= 'Z')|| (c >= 'a' && c <= 'z')) {
			printf("アルファベットです");
		}
		else {
			printf("その他の文字です");
		}
		/*printf("アルファベットです");
	}
	else {
		if (c <= 'a' && c <= 'z') {
			printf("アルファベットです");
		}
		else {
			printf("その他の文字です");
		}
	}
}*/
	}
}