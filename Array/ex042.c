#include<stdio.h>
main()
{
	char deta[] ="apple";
	int i;
	printf("1�������\��\n");
	for (i = 0; deta[i] != '\0'; i++) {
		printf("%c", deta[i]);
	}
	printf("\n������ŕ\��\n");
		printf("%s",&deta[0]);

}