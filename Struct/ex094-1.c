#include<stdio.h>
#include<string.h>
struct day {
	int nen;
	int tuki;
	int hi;
};
struct profile {
	char name[20];
	struct day birth;
	char blood[5];
};
main()
{
	struct profile a[5] = {
		{"ああああ",{2000,1,1},"A"},
		{"あああい",{2000,2,4},"AB"},
		{"あああう",{2000,3,5},"B"},
		{"あああえ",{2000,2,4},"A"},
		{"あああお",{2000,1,1},"B"},
	};
	struct profile *p;
	struct day b[5];
	struct day *d[5];
	/*for (int i = 0; i < 5; i++) {
		d[i] = &b[i];
		p[i] = &a[i];
	}*/
	p = a;
	
	for (int i = 1; i <= 5; i++) {
		if (p->birth.tuki==2) {
			printf("%s--%d年%d月%d日生まれ血液型%s型\n",p->name,p->birth.nen,p->birth.tuki,p->birth.hi, p->blood);
		}
		p++;
	}
}