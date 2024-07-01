#include<stdio.h>
#define DATA_END -1

struct ken {
	int code;
	char name[20];
	struct ken *next;
};
main() {
	struct ken ken_data[] = { {1,"–kŠC“¹",NULL},
							  {2,"ÂXŒ§",NULL},
							  {3,"ŠâŽèŒ§",NULL},
							  {4,"‹{éŒ§",NULL},
							  {5,"H“cŒ§",NULL},
							  {6,"ŽRŒ`Œ§",NULL},
							  {7,"•Ÿ“‡Œ§",NULL},
							  {DATA_END,"",NULL},};
	struct ken* p, * wp;
	struct ken hyougoken = {28,"•ºŒÉŒ§",NULL};
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