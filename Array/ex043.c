#include<stdio.h>
main()
{
	char deta[] = "orange";
	int i;
	printf("文字列:%s", &deta[0]);
	for (i = 0; deta[i] != '\0'; i++) {
		
	}
	printf("\n文字数は%d文字です", i);
}