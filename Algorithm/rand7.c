#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int a, k, i;
	srand(time(0));
	rand();
	k = rand() % 1000 + 1;
	printf("‚P`1000‚Ì’†‚Å‚ ‚½‚è‚Ì”‚ğ—\‘z‚µ‚Ä‚­‚¾‚³‚¢");

	for (i = 0,a=0; k != a; i++) {
		printf("‚ ‚½‚è‚Ì”‚ÍH->");
		scanf("%d", &a);

		if (k < a) {
			printf("‚ ‚½‚è‚Ì”‚æ‚è‘å‚«‚¢‚Å‚·\n");
		}
		else {
			if (k > a) {
				printf("‚ ‚½‚è‚Ì”‚æ‚è¬‚³‚¢‚Å‚·\n");
			} 
		}
	}
	printf("³‰ğ%d‰ñ–Ú‚Å‚ ‚½‚è‚Ü‚µ‚½",i);


}