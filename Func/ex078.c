#include<stdio.h>
int tbl_goukei1(int* p);
int tbl_goukei2(int tbl[]);
main()
{
	int a[] = { 10,20,30,40,-999 },goukei;
	goukei = tbl_goukei1(a);
	printf("goukei=%d\n", goukei);
	goukei = tbl_goukei2(a);
	printf("goukei=%d\n", goukei);
}
int tbl_goukei1(int* p){
	int goukei = 0;
	while (*p != -999) {
		goukei += *p;
		p++;
	}
	return(goukei);
}
int tbl_goukei2(int tbl[])
{
	int goukei = 0, i = 0;
	while (tbl[i] != -999) {
		goukei += tbl[i];
		i++;
	}
	return (goukei);
}