/* 1‚©‚çn‚Ü‚Å‚Ì˜a‚ğ‹‚ß‚é */
#include<stdio.h>

/* 1‚©‚çn‚Ü‚Å‚Ì˜a‚ğ•Ô‚· */
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
	
	printf("®”’l :");
	scanf("%d", &no);
	
	printf("1‚©‚ç%d‚Ü‚Å‚Ì˜a‚Í%d‚Å‚·B\n", no, sumup(no));
	
	return 0;
}