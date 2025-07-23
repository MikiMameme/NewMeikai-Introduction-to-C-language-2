/* 5人の学生の身長/名前の昇順にソート */

#include<stdio.h>
#include<string.h>

#define NUMBER 5
#define NAME_LEN 64

/* 学生を表す構造体 */
typedef struct {
	char name[NAME_LEN];
	int height;
	float weight;
	long schols;
} Student;

/* xおよびyが指す学生を変換 */
void swap_Student(Student *x, Student *y)
{
	Student temp = *x;
	*x = *y;
	*y = temp;
}

/* 学生の配列aの先頭n個の要素を身長の昇順にソート */
void sort_by_height(Student a[], int n)
{
	int i, j;
	
	for(i = 0; i < n - 1; i++) {
		for(j = n - 1; j > i; j--)
			if(a[j - 1].height > a[j].height)
				swap_Student(&a[j - 1], &a[j]);
	}
}

/* 学生の配列aの先頭n個の要素を名前の昇順にソート */
void sort_by_name(Student a[], int n)
{
	int i, j;
	
	for(i = 0; i < n - 1; i++) {
		for(j = n - 1; j > i; j--)
			if(strcmp(a[j - 1].name, a[j].name) > 0)
				swap_Student(&a[j - 1], &a[j]);
	}
}

int main(void)
{
	int i;
	int sort_type;
	Student std[5];
	
	for(i = 0; i < NUMBER; i++) {
		printf("%d番目の学生\n", i + 1);
		printf("名前");	scanf("%s", std[i].name);
		printf("身長");	scanf("%d", &std[i].height);
		printf("体重");	scanf("%f", &std[i].weight);
		printf("奨学金");	scanf("%ld", &std[i].schols);
	}
	
	printf("どちらを行いますか[0]...身長順   [1]...名前順  :");
	scanf("%d", &sort_type);
	
	switch(sort_type) {
		case 0: sort_by_height(std, NUMBER); break;
		case 1: sort_by_name(std, NUMBER); break;
	}
	for(i = 0; i < NUMBER; i++)
		printf("%-8s %6d%6.1f%7ld\n",
			std[i].name, std[i].height, std[i].weight, std[i].schols);
			
	return 0;
}