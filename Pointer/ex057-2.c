#include<stdio.h>
main()
{
	int tbl[][3] = { {10,20,30},{40,50,60},{70,80,90} };
	int* p_tbl, i, j = 0;
	p_tbl = tbl[0];
	p_tbl += 1;
	printf("2次元配列tblの内容\n");
	for (i = 0; i < 3; i++, j++) {
		printf(" %d ", *p_tbl);
		p_tbl += 3;

	}
}