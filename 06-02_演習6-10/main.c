/* 配列の全要素の並びを反転したものを別の配列に格納する */
#include<stdio.h>

#define NUMBER 7						/* 配列xとx2の要素数 */


/* 要素数nの配列v2の要素と並びを反転したものをv1に格納 */
void intary_rcpy(int v1[], const int v2[], int n)
{
	int i;
	
	for(i = 0; i < n; i++)
		v1[i] = v2[n - i - 1];
}

int main(void)
{
	int i;
	int x1[NUMBER], x2[NUMBER];						/* int[NUMBER]型の配列 */
	
	for(i = 0; i < NUMBER; i++){		/* 要素に値を読み込む */
		printf("x1[%d] :", i);
		scanf("%d", &x1[i]);
	}
	
	intary_rcpy(x2, x1, NUMBER);		/* 要素と並びを反転 */

	puts("反転コピ-しました。");			/* 「ー（伸ばし棒）」がダメ文字のため
													「-（ハイフン）」で代用している */
	for(i = 0; i < NUMBER; i++)			/* 要素値を表示 */
		printf("x2[%d] = %d\n", i, x2[i]);
		
	return 0;
}