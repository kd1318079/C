#include<stdio.h>
#define DATA_END -1

struct ken {
	int code;
	char name[20];
	struct ken *next;
};
main() {
	struct ken ken_data[] = { {1,"�k�C��",NULL},
							  {2,"�X��",NULL},
							  {3,"��茧",NULL},
							  {4,"�{�錧",NULL},
							  {5,"�H�c��",NULL},
							  {6,"�R�`��",NULL},
							  {7,"������",NULL},
							  {DATA_END,"",NULL},};
	struct ken* p, * wp;
	struct ken hyougoken = {28,"���Ɍ�",NULL};
	//h = hyougoken;
	p = wp = ken_data;
	do {
		p++;
		/*if (wp->code == 1) {
			wp->next = h;
			wp = h;
			h->next = p;
		}*/
		wp->next = p;
		wp = p;
		
		
	} while (p->code != DATA_END);
	for (p = ken_data; p->code != DATA_END;p=p->next){
		printf("code=%d\tname=%s\n", p->code, p->name);
	}
	hyougoken.next = ken_data[0].next;
	ken_data[0].next = &hyougoken;
	for (p = ken_data; p->code != DATA_END; p = p->next) {
		printf("code=%d\tname=%s\n", p->code, p->name);
	}
}