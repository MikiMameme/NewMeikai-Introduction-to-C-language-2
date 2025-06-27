/* ‚×‚«æ‚ğ‹‚ß‚é */
#include<stdio.h>


/* x‚Ìnæ‚ğ•Ô‚· */
double power(double x, int n)
{
	int i;
	double tmp = 1.0;
	
	for (i = 1; i <= n; i++)
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