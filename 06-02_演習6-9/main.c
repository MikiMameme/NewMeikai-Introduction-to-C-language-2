/* 配列の全要素の並びを反転する */
#include<stdio.h>
#define NUMBER 7						/* 配列xの要素数 */

/* 要素数nの配列vの要素の並びを反転する */
void rev_intary(int v[], int n)
{
	int i;
	
	for(i = 0; i < n / 2; i++) {
		int temp	= v[i];
		v[i]		=v[n - i - 1];
		v[n - i - 1] = temp;
	}
}

int main(void)
{
	int i;
	int x[NUMBER];						/* int[NUMBER]型の配列 */
	
	for(i = 0; i < NUMBER; i++){		/* 要素に値を読み込む */
		printf("x[%d] :", i);
		scanf("%d", &x[i]);
	}
	
	rev_intary(x, NUMBER);				/* 要素と並びを反転 */

	puts("反転しました。");
	for(i = 0; i < NUMBER; i++)			/* 要素値を表示 */
		printf("x[%d] = %d\n", i, x[i]);
		
	return 0;
}