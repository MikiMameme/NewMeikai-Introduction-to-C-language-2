/* 三つの整数を昇順に並べる */

#include<stdio.h>

/* pxとpyが指すオブジェクトの値を交換 */
void swap(int *px, int *py)
{
	int temp = *px;
	*px = *py;
	*py = temp;
}

/* *n1≦n2≦n3となるように並べる */
void sort2(int *n1, int *n2, int *n3)
{
	if(*n1 > *n2)	swap(n1, n2);
	if(*n2 > *n3)	swap(n2, n3);
	if(*n1 > *n2)	swap(n1, n2);
}

int main(void)
{
	int na, nb, nc;
	
	puts("二つの整数を入力してください。");
	printf("整数A:");	scanf("%d", &na);
	printf("整数B:");	scanf("%d", &nb);
	printf("整数C:");	scanf("%d", &nc);
	
	sort2(&na, &nb, &nc);
	
	puts("昇順にしました。");
	printf("整数Aは%dです。\n", na);
	printf("整数Bは%dです。\n", nb);
	printf("整数Cは%dです。\n", nc);
	
	return 0;
}