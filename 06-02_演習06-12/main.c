/* 行列の積を求める */
#include<stdio.h>

/* 4行3列aと3行4列の行列bの積を4行4列の行列cに格納する */
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
	
	printf("4行3列のmxと3行4列のmyの積を求めます。\n");
	
	puts("行列mx");
	for(i = 0; i < 4; i++) {
		for(j = 0; j < 3; j++) {
			printf("mx[%d][%d] :", i, j);
			scanf("%d", &mx[i][j]);
		}
	}
	
	puts("行列my");
	for(i = 0; i < 3; i++) {
		for(j = 0; j < 4; j++) {
			printf("my[%d][%d] :", i, j);
			scanf("%d", &my[i][j]);
		}
	}
	
	mat_mul(mx, my, mz);
	
	puts("行列の積");
	for(i = 0; i < 4; i++) {
		for(j = 0; j < 4; j++)
			printf("%4d", mz[i][j]);
		putchar('\n');
	}
	return 0;
}