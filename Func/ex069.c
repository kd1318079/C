#include<stdio.h>
main()
{
	int c,i=0,sum=0;
	printf("®”‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢(Ctrl+z‚ÅI—¹)");
	while (scanf("%d" ,&c) != EOF) {
		sum += c;
		i++;
		printf("®”:");
	}
	printf("‡Œv:%d\t•½‹Ï:%.2f", sum, (float)sum / i);
}