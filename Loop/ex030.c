#include<stdio.h>
main()
{
	int no, i=0;
	printf("��������");
	scanf("%d", &no);
	while (i<11) {
		printf("%d+%d=%d\n", no, i,no+i);
		i++;
	}
}