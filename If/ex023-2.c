#include<stdio.h>
main()
{
	int year, year1, year2,year3;
	printf("西暦を入力?");
	scanf("%d", &year);

	year1 = year % 4;
	year2 = year % 100;
	year3 = year % 400;

	printf("%d", year1);
	printf("%d", year2);
	printf("%d", year3);
	if ((year3==0)||((year1==0)&&(year2!=0))){
		printf("閏年です");
	}
	else {
		printf("閏年ではないです");
	}
}