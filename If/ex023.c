#include<stdio.h>
main()
{
	int h,m,s,Se;
	printf("•b”‚ğ“ü—Í:");
	scanf("%d", &Se);
	if (Se <= 5000) {
		/*h = s / 3600;
		s = s % 3600;
		m = s / 60;
		s = s % 60;
		printf(" %dŠÔ %d•ª %d•b‚Å‚·", h, m, s);*/
		printf(" %dŠÔ %d•ª %d•b‚Å‚·", Se / 3600, Se % 3600 / 60, Se % 60 % 60);
	}
	else printf("ƒGƒ‰[");
	}