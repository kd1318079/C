#include<stdio.h>
main()
{
	int tbl[][3] = { {10,20,30},{40,50,60},{70,80,90} };
	int* p_tbl, i, j = 0;
	p_tbl = tbl[1];
	printf("2ŽŸŒ³”z—ñtbl‚Ì“à—e\n");
	for (i = 0; i < 3; i++) {
		
	/*	if (j == 3) {
			printf("\n");
			j = 0;
		}*/
		printf(" %d ", *p_tbl++);

	}
}