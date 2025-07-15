/* 二つの実数値を交換する（誤り） */
/* テキスト通りの誤りなのでコンパイル不可 */

#include<stdio.h>

/* pxとpyが指すオブジェクトの値を交換 */
void swap(int *px, int *py)					/* *pxと*pyはint型なのに */
{
	int temp = *px;
	*px = *py;
	*py = temp;
	
}

int main(void)
{
	double da, db;                           /* daとdbはdouble型！？ */
											/* コンパイルエラーが起こることも */
	puts("二つの実数を入力してください。");
	printf("実数A:");	scanf("%lf", &da);
	printf("実数B:");	scanf("%lf", &db);
	
	swap(&da, &db);
	
	puts("これらの値を交換しました。");
	printf("実数Aは%fです。\n", da);
	printf("実数Bは%fです。\n", db);
	
	return 0;
}