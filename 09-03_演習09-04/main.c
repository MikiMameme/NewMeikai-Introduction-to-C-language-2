/* •¶š—ñ‚ğ‹ó•¶š‚É‚·‚éŠÖ” */

#include<stdio.h>

/* •¶š—ñs‚ğ‹ó•¶š—ñ‚É‚·‚é */
void null_string(char s[])
{
	s[0] = '\0';
}

int main(void)
{
	char str[128];
	
	printf("•¶š—ñ‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢:");
	scanf("%s", str);
	
	printf("•¶š—ñstr‚Í\"%s\"‚Å‚·B\n", str);
	null_string(str);
	printf("•¶š—ñstr‚Í‹ó•¶š\"%s\"‚É‚µ‚Ü‚µ‚½B\n", str);
	
	return 0;
}