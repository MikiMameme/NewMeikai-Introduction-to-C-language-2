/* 4�l�̊w����3�Ȗڂ̃e�X�g2�񕪂̍��v�����߂ĕ\���i�֐��Łj */
#include<stdio.h>

/* 4�s3��̍s��a��b�̘a��c�Ɋi�[���� */
void mat_add(const int a[4][3], const int b[4][3], int c[4][3])
{
	int i, j;
	for(i = 0; i < 4; i++)
		for(j = 0; j < 3; j++)
		c[i][j] = a[i][j] + b[i][j];
}
/* 4�s3��̍s��m��\�� */
void mat_print(const int m[4][3])
{
	int i, j;
	for(i = 0; i < 4; i++) {
		for(j = 0; j < 3; j++)
			printf("%4d", m[i][j]);
		putchar('\n');
	}
}

int main(void)
{
	int tensu1[4][3] = { {91, 63, 78}, {67, 72, 46}, {89, 34, 53}, {32, 54, 34} };
	int tensu2[4][3] = { {97, 67, 82}, {73, 43, 46}, {97, 56, 21}, {85, 46, 35} };
	int sum[4][3];
	
	mat_add(tensu1, tensu2, sum);
	
	puts("1��ڂ̓_��");		mat_print(tensu1);
	puts("2��ڂ̓_��");		mat_print(tensu2);
	puts("���v�_");			mat_print(sum);
	
	return 0;
}