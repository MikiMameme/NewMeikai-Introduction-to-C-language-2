/* �w����\���\���́i�錾�E�������j */

#include<stdio.h>

#define NAME_LEN 64

/* �w����\���\���� */
struct student {
	char name[NAME_LEN];
	int height;
	float weight;
	long schols;
};

int main(void)
{
	struct student takao = {"Takao", 173, 86.2};	/* �����N */
	
	printf("���O = %s %p\n", takao.name, &takao.name);
	printf("�g�� = %d %p\n", takao.height, &takao.height);
	printf("�̏d = %.1f %p\n", takao.weight, &takao.weight);
	printf("���w�� = %ld %p\n", takao.schols, &takao.schols);
	
	return 0;
}