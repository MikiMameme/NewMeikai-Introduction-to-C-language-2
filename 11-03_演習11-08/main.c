/* •¶š—ñ’†‚Ì”š•¶š‚ğíœ‚·‚é */

#include<stdio.h>

/* •¶š—ñstr’†‚Ì”š•¶š‚ğíœ‚·‚é */
void del_digit(char *str)
{
	char *ptr = str;
	
	while(*str) {
		if(*str < '0' || *str > '9')
			*ptr++ = *str;
		str++;
	}
	*ptr = '\0';
}

int main(void)
{
	char str[256];
	
	printf("•¶š—ñ‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢:");
	scanf("%s", str);
	
	del_digit(str);
	
	puts("•¶š”š‚ğíœ‚µ‚Ü‚µ‚½B");
	printf("str=%s\n", str);
	
	return 0;
}