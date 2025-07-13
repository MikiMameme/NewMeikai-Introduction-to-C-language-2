/* •¶š—ñ’†‚Ì•¶š”š‚ğíœ‚·‚é */

#include<stdio.h>

/* •¶š—ñs’†‚Ì”š•¶š‚ğíœ‚·‚é */
void del_digit(char s[])
{
	int i = 0, idx = 0;
	
	while(s[i]) {
		if(s[i] < '0' || s[i] > '9')	/* ”š•¶š‚Å‚È‚¯‚ê‚Î */
			s[idx++] = s[i];
		i++;
	}
	s[idx] = '\0';
}

int main(void)
{
	char str[256];
	
	printf("•¶š—ñ‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢:");
	scanf("%s", str);
	
	del_digit(str);						/* •¶š—ñ“à‚Ì•¶š”š‚ğíœ */
	
	puts("•¶š”š‚ğíœ‚µ‚Ü‚µ‚½B");
	printf("str=%s\n", str);
	
	return 0;
}