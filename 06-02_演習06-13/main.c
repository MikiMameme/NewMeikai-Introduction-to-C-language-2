/* 4�l�̊w����3�Ȗڂ̃e�X�g2�񕪂̍��v�����߂ĕ\�� */
#include<stdio.h>

/* n�s3��̍s��a��b�̘a��c�Ɋi�[���� */
void mat_add(const int a[][3], const int b[][3], int c[][3], int n)
{
	int i, j;
	
	for(i = 0; i < n; i++)
		for(j = 0; j < 3; j++)
			c[i][j] = a[i][j] + b[i][j];
}

/* n�s3��̍s��m��\�� */
void mat_print(const int m[][3], int n)
{
	int i, j;
	
	for(i = 0; i < n; i++) {
		for(j = 0; j < 3; j++)
			printf("%4d", m[i][j]);
		putchar('\n');
	}
}

int main(void)
{
	int i;
	int tensu[2][4][3] = {
		{{91, 63, 78}, {67, 72, 46}, {89, 34, 53}, {32, 54, 34} },
		{{97, 67, 82}, {73, 43, 46}, {97, 56, 21}, {85, 46, 35} },
	};
	int sum[4][3];
	
	mat_add(&tensu[0], &tensu[1], sum, 4);
	
	/* �e��̓_����\�� */
	for(i = 0; i < 2; i++) {
		printf("%d��ڂ̓_��\n", i + 1);
		mat_print(&tensu[i], 4);
		putchar('\n');
	}
	
	/* ���v�_��\�� */
	puts("���v�_");
	mat_print(sum, 4);
	
	return 0;
}