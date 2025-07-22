/* 学生を表す構造体による佐中君 */

#include<stdio.h>
#include<string.h>

#define NAME_LEN 64

/* 学生を表す構造体 */
struct student {
	char name[NAME_LEN];	/* 名前 */
	int height;				/* 身長 */
	float weight;			/* 体重 */
	long schols;			/* 奨学金 */
};

int main(void)
{
	struct student sanaka;
	
	strcpy(sanaka.name, "Sanaka");
	sanaka.height = 175;
	sanaka.weight = 62.5;
	sanaka.schols = 73000;
	
	printf("氏名 = %s\n", sanaka.name);
	printf("身長 = %d\n", sanaka.height);
	printf("体重 = %.1f\n", sanaka.weight);
	printf("奨学金 = %ld\n", sanaka.schols);
	
	return 0;
}