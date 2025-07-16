/* 配列の受け渡し */

#include<stdio.h>

/* 配列vの先頭n個の要素に添え字と同じ値を代入 */
void set_idx(int *v, int n)
{
	int i;
	for(i = 0; i < n; i++)
		v[i] = i;
}

int main(void)
{
	int i;
	int a[5];
	
	set_idx[5];
	
	set_idx(a, 5);
	
	for(i = 0; i < 5; i++)
		printf("a[%d] = %d\n", i, a[i]);
		
	return 0;
}