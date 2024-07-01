#include"stdio.h"
#include"stdlib.h"
#include"time.h"
#define MapNum 3
#define W 10
#define H 5
typedef struct {
	int m_Map[H][W];
}Map;
void SetMap(char *filename,Map*m);
void DrawMap(Map m);
void player();
main()
{
	Map MapData;
	char* MapFileName[MapNum] = { "map0.txt","map1.txt","map2.txt" };
	int serect;
	printf("どのマップを表示しますか？(0,1,2)");
	scanf("%d", &serect);
	SetMap(MapFileName[serect],&MapData);
	DrawMap(MapData);
}
void SetMap(char* filename, Map* m) {
	FILE* fp;
	char ch;
	fp = fopen(filename, "r");
	for (int i = 0; i < H; i++) {
		for (int j = 0; j < W; j++) {
			ch = fgetc(fp);
			m->m_Map[i][j] = ch - '0';//atoi(ch);
		}
		fgetc(fp);
	}
	fclose(fp);
}
void DrawMap(Map m){
	for (int i = 0; i < H; i++) {
		for (int j = 0; j < W; j++) {
			if (m.m_Map[i][j] == 0) {
				printf(" ");
			}
			else { printf("□"); }
		}
		printf("\n");
	}
}

void player() {

}