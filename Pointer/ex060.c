#include<stdio.h>
main()
{
	char data[15] = "Language";
	char* p_data,a,i,j;
	p_data = data;
	printf("data[]=%s", data);
	printf("\nŒŸõ•¶š‚ÍH");
	scanf("%c", &a);
	printf("ŒŸõŒ‹‰Ê‚ÍA");
	for (i = 0; i != 15; i++) {
		if (*p_data++ == a) {
			printf("%d ", i+1);
		}
	}printf("•¶š–Ú‚Å‚·");
}