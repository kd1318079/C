#include<stdio.h>
main()
{
	char c;
	printf("•¶Žš‚ð“ü—Í:");
	scanf("%c", &c);
	if (c >= 0x41 && c <= 0x5A) {
		printf("%c", c + 0x20);
	}
	else {
		if (c >= 0x61 && c<= 0x7A) {
			printf("%c", c - 0x20);
		}
		else {
			printf("error");
		}
	}
}
