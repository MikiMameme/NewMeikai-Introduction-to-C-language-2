/* •¶š—ñ"12345"‚ğ‘®‰»‚µ‚Ä•\¦ */

#include<stdio.h>

int main(void)
{
	char str[] = "12345";
	
	printf("%s\n",   str);
	printf("%3s\n",  str);
	printf("%.3s\n", str);
	printf("%8s\n",  str);
	printf("%-8s\n", str);
	
	return 0;
}