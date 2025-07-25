/* �s��̐ς����߂� */
#include<stdio.h>

/* 4�s3��a��3�s4��̍s��b�̐ς�4�s4��̍s��c�Ɋi�[���� */
void mat_mul(const int a[4][3], const int b[3][4], int c[4][4])
{
	int i, j, k;
	
	for(i = 0; i < 4; i++) {
		for(j = 0; j < 4; j++){
			c[i][j] = 0;
			for(k = 0; k < 3; k++)
				c[i][j] += a[i][k] * b[k][j];
		}
	}
}

int main(void)
{
	int i, j;
	int mx[4][3];
	int my[3][4];
	int mz[4][4];
	
	printf("4�s3���mx��3�s4���my�̐ς����߂܂��B\n");
	
	puts("�s��mx");
	for(i = 0; i < 4; i++) {
		for(j = 0; j < 3; j++) {
			printf("mx[%d][%d] :", i, j);
			scanf("%d", &mx[i][j]);
		}
	}
	
	puts("�s��my");
	for(i = 0; i < 3; i++) {
		for(j = 0; j < 4; j++) {
			printf("my[%d][%d] :", i, j);
			scanf("%d", &my[i][j]);
		}
	}
	
	mat_mul(mx, my, mz);
	
	puts("�s��̐�");
	for(i = 0; i < 4; i++) {
		for(j = 0; j < 4; j++)
			printf("%4d", mz[i][j]);
		putchar('\n');
	}
	return 0;
}