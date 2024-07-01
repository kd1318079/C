#include<stdio.h>
main()
{
	int sum = 0, i, ave = 0;
	printf("”‚Í?");
	scanf("%d", &i);
	for (; i != -999; ave++) {
		sum += i;
		printf("”‚Í?");
		scanf("%d", &i);
	}
	printf("‡Œv=%d •½‹Ï=%.2f", sum, (float)sum / ave);
}