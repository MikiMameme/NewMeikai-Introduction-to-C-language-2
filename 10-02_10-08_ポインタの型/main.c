/* ��̎����l����������i���j */
/* �e�L�X�g�ʂ�̌��Ȃ̂ŃR���p�C���s�� */

#include<stdio.h>

/* px��py���w���I�u�W�F�N�g�̒l������ */
void swap(int *px, int *py)					/* *px��*py��int�^�Ȃ̂� */
{
	int temp = *px;
	*px = *py;
	*py = temp;
	
}

int main(void)
{
	double da, db;                           /* da��db��double�^�I�H */
											/* �R���p�C���G���[���N���邱�Ƃ� */
	puts("��̎�������͂��Ă��������B");
	printf("����A:");	scanf("%lf", &da);
	printf("����B:");	scanf("%lf", &db);
	
	swap(&da, &db);
	
	puts("�����̒l���������܂����B");
	printf("����A��%f�ł��B\n", da);
	printf("����B��%f�ł��B\n", db);
	
	return 0;
}