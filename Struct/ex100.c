#include<stdio.h>
#define DATA_END 9

struct ken {
	int code;
	char name[20];
	struct ken *next;
};
main() {
	struct ken ken_data[101] = { 1,"北海道",NULL };			//[0]に1
	struct ken* p, * wp;
	int a, b;
	char c[20];
	p = wp = ken_data;
	do {
		printf("メニュー\n1：表示\t2：追加\t3：削除\t9：終了\n");
		scanf("%d", &a);
		do {
			p++;
			wp->next = p;
			wp = p;
		} while (p->code != DATA_END);
		if (a == 1) {
			printf("表示が入力されました");
			for (p = ken_data; p->code != DATA_END; p = p->next) {
				printf("code=%d\tname=%s\n", p->code, p->name);
			}
		}
		if (a == 2) {
			printf("追加が入力されました");
			printf("追加したい番号と文字を入力してください");
			do {
				scanf("%d", &b);
				if (b == 1) {
					printf("最初のはデータは上書きできません");
				}
			} while (b == 1);
			scanf("%s", c);
			ken_data[b - 1].code = b;
			ken_data[b - 1].name = c;
			ken_data[b - 1].next = NULL;
		}
		if (a == 3) {
			printf("削除が入力されました");
			printf("削除したい番号を入力してください");
			scanf("%d", &b);
			ken_data[b - 1].code = " ";
			//ken_data[b - 1].name = " ";
			//ken_data[b - 1].next = NULL;
		}
	} while (a!=DATA_END);
}