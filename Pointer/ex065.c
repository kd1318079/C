#include<stdio.h>
#include<string.h>
main()
{
	int i, j;
	char *wk;
	char* p_tbl[] = { "Programing2","Algorithm","Programing1","C" };
	for (i = 0; i < 3;i++ ) {
		for (j = i+1; j < 4; j++) {
			if (strcmp(p_tbl[i], p_tbl[j]) > 0) {
				wk = p_tbl[i];
				p_tbl[i] = p_tbl[j];
				p_tbl[j] = wk;
			}
		}
	}
	for (i = 0; i < 4; i++) {
		printf("%s\n", p_tbl[i]);
	}
}