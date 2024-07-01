#include<stdio.h>
struct syouhin_data {
	char name[20];
	int tanka;
	int kosuu;
};
main()
{
	struct syouhin_data a[3]={{"エンピツ",30,5},
							 {"ケシゴム",50,2},
						     {"フデバコ",500,3} };
	struct syouhin_data *p[3];
	for (int i = 0; i < 3; i++) {
		p[i] = &a[i];
	}
	for (int i = 0; i < 3; i++) {
		printf("商品名：%s\t",p[i]->name);
		printf("単価：%4d\t",p[i]->tanka);
		printf("個数：%4d\t",p[i]->kosuu);
		printf("金額：\\%4d\n",p[i]->tanka * p[i]->kosuu);
	}
}