#include<stdio.h>
main()
{
	char data[15] = "Language";
	char* p_data,a,i,j;
	p_data = data;
	printf("data[]=%s", data);
	printf("\n���������́H");
	scanf("%c", &a);
	printf("�������ʂ́A");
	for (i = 0; i != 15; i++) {
		if (*p_data++ == a) {
			printf("%d ", i+1);
		}
	}printf("�����ڂł�");
}