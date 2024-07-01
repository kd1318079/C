#include<stdio.h>
main()
{
	int m;
	printf("Œ‚ğ“ü—Í:");
	scanf("%d", &m);
	if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 12) {
		printf("ÅI“ú‚Í31“ú‚Å‚·");
	}
	else {
		if (m == 4 || m == 6 || m == 9 || m == 11) {
			printf("ÅI“ú‚Í30“ú‚Å‚·");
		}
		else {
			if (m == 2) {
				printf("ÅI“ú‚Í28“ú‚Å‚·");
			}
			else {
				printf("1`12‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢");
			}
		}
	}
}