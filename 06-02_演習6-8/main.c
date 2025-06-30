/* 英語の点数と数学の点数の最低点を求める */
#include<stdio.h>
#define NUMBER 5

/* 要素数nの配列vの最小値を返す */
int min_of(const int v[], int n)
{
	int i;
	int min = v[0];
	
	for(i = 1; i < n; i++)
		if(v[i] < min)
			min = v[i];
	return min;
}

int main(void)
{
	int i;
	int eng[NUMBER];
	int mat[NUMBER];
	int min_e, min_m;
	
	printf("%d人の点数を入力してください。\n", NUMBER);
	for(i = 0; i < NUMBER; i++) {
		printf("[%d] 英語 :", i + 1);	scanf("%d", &eng[i]);
		printf("     数学 :");			scanf("%d", &mat[i]);
	}
	min_e = min_of(eng, NUMBER);	/* 呼び出し側では[]を付けずに、 */
	min_m = min_of(mat, NUMBER);	/* 配列の名前だけで記述する。 */
	
	printf("英語の最低点 =%d\n", min_e);
	printf("数学の最低点 =%d\n", min_m);
	
	return 0;
}