#include<stdio.h>
struct syouhin_data {
	char name[20];
	int tanka;
	int kosuu;
};
main()
{
	struct syouhin_data a[3]={{"�G���s�c",30,5},
							 {"�P�V�S��",50,2},
						     {"�t�f�o�R",500,3} };
	struct syouhin_data *p[3];
	for (int i = 0; i < 3; i++) {
		p[i] = &a[i];
	}
	for (int i = 0; i < 3; i++) {
		printf("���i���F%s\t",p[i]->name);
		printf("�P���F%4d\t",p[i]->tanka);
		printf("���F%4d\t",p[i]->kosuu);
		printf("���z�F\\%4d\n",p[i]->tanka * p[i]->kosuu);
	}
}