/* 10章「ポインタ」まとめ */

#include<stdio.h>

#define NUMBER 5	/* 人数 */

/* pxとpyが指すオブジェクトの値を交換 */
void swap(int *px, int *py)
{
	int temp = *px;
	*px = *py;
	*py = temp;
}

/* バブルソート */
void bsort(int a[], int n)
{
	int i, j;
	
	for(i = 0; i < n - 1; i++)
		for(j = n - 1; j > i; j--)
			if(a[j - 1] > a[j])
				swap(&a[j], &a[j - 1]);
}

int main(void)
{
	int i;
	int point[NUMBER];
	
	printf("%d人の点数を入力してください。\n", NUMBER);
	for(i = 0; i < NUMBER; i++) {
		printf("%2d番:", i + 1);
		scanf("%d", &point[i]);
	}
	
	bsort(point, NUMBER);
	
	puts("昇順にしました。");
	for(i = 0; i < NUMBER; i++)
		printf("%2d番: %d\n", i + 1, point[i]);
		
		return 0;
}