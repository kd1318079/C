#include<stdio.h>
struct syohin_data {
	char name[20];
	int tanka;
};
void display3(int *p);
main()
{
	int a = 10;
	struct syohin_data syohin = { "ケシゴム",50 };
	//display1(a);
	display3(&syohin.tanka);
}
void display3(int *p) {
	printf("ケシゴム %d\n", *p);
}