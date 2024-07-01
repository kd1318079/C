#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int a,k;
	srand(time(0));
	rand();
	k = rand() % 3 + 1;
	printf("何をだしますか？\n1:グー 2:チョキ 3:パ－");
	scanf("%d", &a);
	if (a == 1) {
		printf("プレイヤーは、グーです。");
		if (k == 1) {
			printf("コンピューターは、グーです。");
			printf("\n\nあいこです");
		}
		if (k == 2) {
			printf("コンピューターは、チョキです。");
			printf("\n\nプレイヤーの勝ちです");
		}
		if (k == 3) {
			printf("コンピューターは、パーです。");
			printf("\n\nプレイヤーの負けです");
		}
	}
	if (a == 2) {
		printf("プレイヤーは、チョキです。");
		if (k == 1) {
			printf("コンピューターは、グーです。");
			printf("\n\nプレイヤーの負けです");
		}
		if (k == 2) {
			printf("コンピューターは、チョキです。");
			printf("\n\nあいこです");
		}
		if (k == 3) {
			printf("コンピューターは、パーです。");
			printf("\n\nプレイヤーの勝ちです");
		}
	}
		if (a == 3) {
			printf("プレイヤーは、パーです。");
			if (k == 1) {
				printf("コンピューターは、グーです。");
				printf("\n\nプレイヤーの勝ちです");
			}
			if (k == 2) {
				printf("コンピューターは、チョキです。");
				printf("\n\nプレイヤーの負けです");
			}
			if (k == 3) {
				printf("コンピューターは、パーです。");
				printf("\n\nあいこです。");
			}
		}
}