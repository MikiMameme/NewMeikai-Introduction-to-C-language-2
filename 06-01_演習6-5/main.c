/* 1からnまでの和を求める */
#include<stdio.h>

/* 1からnまでの和を返す */
int sumup(int n)
{
	int i;
	int sum = 0;
	
	for(i = 1; i <= n; i++)
		sum += i;
	return sum;
}

int main(void)
{
	int no;
	
	printf("整数値 :");
	scanf("%d", &no);
	
	printf("1から%dまでの和は%dです。\n", no, sumup(no));
	
	return 0;
}