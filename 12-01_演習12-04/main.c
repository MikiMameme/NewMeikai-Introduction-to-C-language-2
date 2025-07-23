/* 5�l�̊w���̐g��/���O�̏����Ƀ\�[�g */

#include<stdio.h>
#include<string.h>

#define NUMBER 5
#define NAME_LEN 64

/* �w����\���\���� */
typedef struct {
	char name[NAME_LEN];
	int height;
	float weight;
	long schols;
} Student;

/* x�����y���w���w����ϊ� */
void swap_Student(Student *x, Student *y)
{
	Student temp = *x;
	*x = *y;
	*y = temp;
}

/* �w���̔z��a�̐擪n�̗v�f��g���̏����Ƀ\�[�g */
void sort_by_height(Student a[], int n)
{
	int i, j;
	
	for(i = 0; i < n - 1; i++) {
		for(j = n - 1; j > i; j--)
			if(a[j - 1].height > a[j].height)
				swap_Student(&a[j - 1], &a[j]);
	}
}

/* �w���̔z��a�̐擪n�̗v�f�𖼑O�̏����Ƀ\�[�g */
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
		printf("%d�Ԗڂ̊w��\n", i + 1);
		printf("���O");	scanf("%s", std[i].name);
		printf("�g��");	scanf("%d", &std[i].height);
		printf("�̏d");	scanf("%f", &std[i].weight);
		printf("���w��");	scanf("%ld", &std[i].schols);
	}
	
	printf("�ǂ�����s���܂���[0]...�g����   [1]...���O��  :");
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