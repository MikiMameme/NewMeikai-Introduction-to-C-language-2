/* �w����\���\���̂ɂ�鍲���N */

#include<stdio.h>
#include<string.h>

#define NAME_LEN 64

/* �w����\���\���� */
struct student {
	char name[NAME_LEN];	/* ���O */
	int height;				/* �g�� */
	float weight;			/* �̏d */
	long schols;			/* ���w�� */
};

int main(void)
{
	struct student sanaka;
	
	strcpy(sanaka.name, "Sanaka");
	sanaka.height = 175;
	sanaka.weight = 62.5;
	sanaka.schols = 73000;
	
	printf("���� = %s\n", sanaka.name);
	printf("�g�� = %d\n", sanaka.height);
	printf("�̏d = %.1f\n", sanaka.weight);
	printf("���w�� = %ld\n", sanaka.schols);
	
	return 0;
}