#include<stdio.h>
main()
{
	int no;
	printf("¼—ï‚ğ“ü—Í:");
	scanf("%d", &no);
	if (no < 1988) {
		printf("º˜a¶‚Ü‚ê‚Å‚·\n");
	}
	else {
		if (no < 2019) {
			printf("•½¬¶‚Ü‚ê‚Å‚·\n");
		}
		else {
			printf("—ß˜a¶‚Ü‚ê‚Å‚·\n");
		}
		}
}