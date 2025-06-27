/* x‚Ìnæ‚ğ•Ô‚· */
#include<stdio.h>


double power(double x, int n)
{
	double tmp = 1.0;
	
	while (n-- > 0)
		tmp *= x;
	return tmp;
}

int main(void)
{
	double a;
	int b;
	
	printf("a‚Ìbæ‚ğ‹‚ß‚Ü‚·B\n");
	printf("À”a :");	scanf("%lf", &a);
	printf("À”b :");	scanf("%d", &b);
	
	printf("%.2f‚Ì%dæ‚Í%.2f‚Å‚·B\n", a, b, power(a, b));
	
	return 0;
}