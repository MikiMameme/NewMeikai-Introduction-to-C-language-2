/* 二つの整数の和と差を求める（間違い、0のまま出力される） */
/* これは、ポインタの必要性を説明するためにわざと間違えているコードである */

#include<stdio.h>

/* n1とn2の和と差をsumとdiffに格納（間違い） */
void sum_diff(int n1, int n2, int sum, int diff)
{
	sum = n1 + n2;
	diff = (n1 > n2) ? n1 - n2 : n2 - n1;
}
int main(void)
{
	int na, nb;
	int wa = 0, sa = 0;
	
	puts("二つの整数を入力してください。");
	printf("整数A:");	scanf("%d", &na);
	printf("整数B:");	scanf("%d", &nb);
	
	sum_diff(na, nb, wa, sa);					/* waとsaは最初から最後まで0のまま */
	
	printf("和は%dで差は%dです。\n", wa, sa);	/* 和と差は0のまま */
	
	return 0;
}