/* 4人の学生の3科目のテスト2回分の合計を求めて表示 */
#include<stdio.h>

/* n行3列の行列aとbの和をcに格納する */
void mat_add(const int a[][3], const int b[][3], int c[][3], int n)
{
	int i, j;
	
	for(i = 0; i < n; i++)
		for(j = 0; j < 3; j++)
			c[i][j] = a[i][j] + b[i][j];
}

/* n行3列の行列mを表示 */
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
	
	/* 各回の点数を表示 */
	for(i = 0; i < 2; i++) {
		printf("%d回目の点数\n", i + 1);
		mat_print(&tensu[i], 4);
		putchar('\n');
	}
	
	/* 合計点を表示 */
	puts("合計点");
	mat_print(sum, 4);
	
	return 0;
}