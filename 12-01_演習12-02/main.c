/* 学生の身長と体重を更新(構造体にtypedef名を導入) */

#include<stdio.h>

#define NAME_LEN 64

/* 学生を表す構造体 */
typedef struct student {
	char name[NAME_LEN];
	int height;
	float weight;
	long schols;
} Student;

/* stdが指す学生の身長を180cmまで伸ばして体重を80kgまで減らす */
void hiroko(Student *std)
{
	if (std->height < 180) std->height = 180;
	if (std->weight > 80) std->weight = 80;
}

int main(void)
{
	Student sanaka;
	
	printf("名前:");		scanf("%s", sanaka.name);
	printf("身長:");		scanf("%d", &sanaka.height);
	printf("体重:");		scanf("%f", &sanaka.weight);
	printf("奨学金:");	scanf("%ld", &sanaka.schols);
	
	hiroko(&sanaka);
	
	printf("氏名 = %s\n", sanaka.name);
	printf("身長 = %d\n", sanaka.height);
	printf("体重 = %.1f\n", sanaka.weight);
	printf("奨学金 = %ld\n", sanaka.schols);
	
	return 0;
}