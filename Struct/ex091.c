#include<stdio.h>
struct profile {
	char name[20];
	int birth[3];
	char blood[5];
};
main()
{
	struct profile a;
	struct profile *p;
	p = &a;
	printf("���O�����");
	scanf("%s", p->name);
	printf("���N�������󔒂ŋ�؂��ē���");
	scanf("%d%d%d", &p->birth[0], &p->birth[1], &p->birth[2]);
	printf("���t�^�����");
	scanf("%*c%s", p->blood);
	printf("%s--%d�N%d��%d�������t�^-%s�^", p->name, p->birth[0], p->birth[1], p->birth[2],p->blood);
}