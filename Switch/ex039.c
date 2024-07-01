#include<stdio.h>
main()
{
	char d;
	int a, b, c;
	printf("処理を入力");
	scanf("%c", &d);
	printf("整数を3個入力");
	scanf("%d%d%d", &a,&b,&c);
	//if (d < 'Z') {
		//d += 0x20;	}
	switch (d) {
	case 'D':
	case 'd':
		if (a >= b) {
			if (a >= c) {
				printf("最大値は%dです", a);
			}
		}
		if (b >= c) {
			if (c >= a) {
				printf("最大値は%dです", b);
			}
		}
		if (c >= a) {
			if (c >= b) {
				printf("最大値は%dです", c);
			}
		}break;
	case 'S':
	case 's':
		if (a <= b) {
			if (a <= c) {
				printf("最小値は%dです", a);
			}
		}
		if (b <= c) {
			if (c <= a) {
				printf("最小値は%dです", b);
			}
		}
		if (c <= a) {
			if (c <= b) {
				printf("最小値は%dです", c);
			}
		}break;
	case 'G':
	case 'g':
		printf("合計は%dです",a+b+c); break;
	case 'H':
	case 'h':
		printf("平均は%.2fです",(float)(a+b+c)/3); break;
	}
}