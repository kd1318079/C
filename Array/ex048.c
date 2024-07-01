#include<stdio.h>
main()
{
	int a[2][2][3] = { {{3,4,5},{4,5,6}},{{ 2,2,3 },{2,5,6}} } ;
	int i, f, s,sum=0;
	for (i = 0; i < 2; i++) {
		printf("\nアパート%d", i + 1);
		for (f = 0; f < 2; f++) {
			printf("(%d階)", f + 1);
			for (s = 0; s < 3; s++) {
				sum += a[i][f][s];
				printf("%d ", a[i][f][s]);
			}
			
		}
	}
	printf("\n全体で%d人住んでいます", sum);
}