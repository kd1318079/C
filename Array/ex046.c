#include<stdio.h>
main()
{
	int i,b, sum;
	int a[2][3]={ {10,20,30}, {1,2,3} };
	for (i = 0, b = 0, sum = 0; i <= 1; i++) {
		for (b = 0; b <= 2; b++) {
			printf("a[%d][%d] = %d\n",i, b, a[i][b]);
			sum += a[i][b];
		}
		printf("%ds–Ú‚Ì‡Œv = %d\n\n", i, sum);
		sum = 0;
	}
}