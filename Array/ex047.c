#include<stdio.h>
main()
{
	int i, f;
	float x[2][3],sum;
	for (i = 0; i < 3; i++){
		sum = 0;
		for (f = 0; f < 2; f++) {
			printf("x[%d][%d] = ", i, f);
			scanf("%f", &x[i][f]);
			sum += x[i][f];
		}
		printf("%ds–Ú‚Ì•½‹Ï = %.2f\n", i, sum / f);	
	}
}