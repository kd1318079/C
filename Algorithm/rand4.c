#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int un;
	srand(time(0));
	rand();
	un = rand() % 5+1;
	printf("¡“ú‚Ì‚ ‚È‚½‚Ì‰^¨‚Í");
	for (; un != 0; un--) {
		printf("™");
	}
	printf("‚Å‚·");








	/*switch (un) {
	case '1':
		printf("¡“ú‚Ì‚ ‚È‚½‚Ì‰^¨‚Í™‚Å‚·"); break;
	case '2':
		printf("¡“ú‚Ì‚ ‚È‚½‚Ì‰^¨‚Í™™‚Å‚·"); break;
	case '3':
		printf("¡“ú‚Ì‚ ‚È‚½‚Ì‰^¨‚Í™™™‚Å‚·"); break;
	case '4':
		printf("¡“ú‚Ì‚ ‚È‚½‚Ì‰^¨‚Í™™™™‚Å‚·"); break;
	case '5':
		printf("¡“ú‚Ì‚ ‚È‚½‚Ì‰^¨‚Í™™™™™‚Å‚·"); break;
	}*/
}