#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int un;
	srand(time(0));
	rand();
	un = rand() % 5+1;
	printf("�����̂��Ȃ��̉^����");
	for (; un != 0; un--) {
		printf("��");
	}
	printf("�ł�");








	/*switch (un) {
	case '1':
		printf("�����̂��Ȃ��̉^���́��ł�"); break;
	case '2':
		printf("�����̂��Ȃ��̉^���́����ł�"); break;
	case '3':
		printf("�����̂��Ȃ��̉^���́������ł�"); break;
	case '4':
		printf("�����̂��Ȃ��̉^���́��������ł�"); break;
	case '5':
		printf("�����̂��Ȃ��̉^���́����������ł�"); break;
	}*/
}