#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int un;
	srand(time(0));
	rand();
	un = rand() % 5+1;
	printf("今日のあなたの運勢は");
	for (; un != 0; un--) {
		printf("☆");
	}
	printf("です");








	/*switch (un) {
	case '1':
		printf("今日のあなたの運勢は☆です"); break;
	case '2':
		printf("今日のあなたの運勢は☆☆です"); break;
	case '3':
		printf("今日のあなたの運勢は☆☆☆です"); break;
	case '4':
		printf("今日のあなたの運勢は☆☆☆☆です"); break;
	case '5':
		printf("今日のあなたの運勢は☆☆☆☆☆です"); break;
	}*/
}