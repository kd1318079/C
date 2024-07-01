#include<stdio.h>
main()
{
	int i, b ;
	printf("êîÇÕ?");
	scanf("%d", &i);
	do {
		b = 0;
		do {
			printf("*");
			b++;
		} while (b = 5);
		printf("\n");
		i--;
		
	} while (0 < i);
}





	/*do {
		printf("*");
		b--;
	} while (b >= 0) {
		do {
			printf("\n");
			--i;
		}
	}while (0 < i);
*/