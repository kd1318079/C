#include<stdio.h>
main()
{
	char data[15] = "Language";
	char* p_data,a,i,j;
	p_data = data;
	printf("data[]=%s", data);
	printf("\n検索文字は？");
	scanf("%c", &a);
	printf("検索結果は、");
	for (i = 0; i != 15; i++) {
		if (*p_data++ == a) {
			printf("%d ", i+1);
		}
	}printf("文字目です");
}