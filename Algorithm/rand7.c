#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int a, k, i;
	srand(time(0));
	rand();
	k = rand() % 1000 + 1;
	printf("１〜1000の中であたりの数を予想してください");

	for (i = 0,a=0; k != a; i++) {
		printf("あたりの数は？->");
		scanf("%d", &a);

		if (k < a) {
			printf("あたりの数より大きいです\n");
		}
		else {
			if (k > a) {
				printf("あたりの数より小さいです\n");
			} 
		}
	}
	printf("正解%d回目であたりました",i);


}