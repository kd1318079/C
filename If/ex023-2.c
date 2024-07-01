#include<stdio.h>
main()
{
	int year, year1, year2,year3;
	printf("¼—ï‚ğ“ü—Í?");
	scanf("%d", &year);

	year1 = year % 4;
	year2 = year % 100;
	year3 = year % 400;

	printf("%d", year1);
	printf("%d", year2);
	printf("%d", year3);
	if ((year3==0)||((year1==0)&&(year2!=0))){
		printf("‰[”N‚Å‚·");
	}
	else {
		printf("‰[”N‚Å‚Í‚È‚¢‚Å‚·");
	}
}