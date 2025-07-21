/* strlenŠÖ”‚Ì—˜—p—á */

#include<stdio.h>
#include<string.h>

int main(void)
{
	char str[128];
	
	printf("•¶š—ñ‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢:");
	scanf("%s", str);
	
	printf("•¶š—ñ\"%s\"‚Ì’·‚³‚Í%u‚Å‚·B\n", str, (unsigned)strlen(str));
	
	return 0;
}