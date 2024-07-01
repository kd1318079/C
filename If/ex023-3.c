#include<stdio.h>
main()
{
	int s;
	int a, b;
	printf("‰‰Zq‚ğ“ü—Í¦(1 = +, 2 = -, 3 = *, 4 = / )\n");
	scanf("%d", &s);
	printf("2‚Â‚Ì®”‚ğ“ü—Í:");
	scanf("%d%d", &a,&b);
	if (s== 1) {
		printf("%d", a + b);
	}
	else {
		if (s == 2) {
			printf("%d", a - b);
		}
		else {
			if (s == 3) {
				printf("%d", a * b);
			}
			else{
				if (s == 4) {
					printf("%d", a / b);
				}
				else {
					printf("‰‰Zq“ü—Í1‚©‚ç4‚Ì”š‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢");
				}
			}
		}
	}
}