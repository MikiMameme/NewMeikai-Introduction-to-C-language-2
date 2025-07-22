/* 学生を表す構造体（宣言・初期化） */

#include<stdio.h>

#define NAME_LEN 64

/* 学生を表す構造体 */
struct student {
	char name[NAME_LEN];
	int height;
	float weight;
	long schols;
};

int main(void)
{
	struct student takao = {"Takao", 173, 86.2};	/* 高尾君 */
	
	printf("名前 = %s %p\n", takao.name, &takao.name);
	printf("身長 = %d %p\n", takao.height, &takao.height);
	printf("体重 = %.1f %p\n", takao.weight, &takao.weight);
	printf("奨学金 = %ld %p\n", takao.schols, &takao.schols);
	
	return 0;
}