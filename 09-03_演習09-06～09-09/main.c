/* •¶š—ñ‚ğ‘€ì‚·‚éŠÖ”ŒQ */

#include<stdio.h>

/* •¶š—ñs‚Ì’†‚Ì•¶šc‚ÌŒÂ”‚ğ•Ô‚· */
int str_chnum(const char s[], int c)
{
	int i, count = 0;
	for(i = 0; s[i] != '\0'; i++)
		if(s[i] == c)
			count++;
	return count;
}

/* •¶š—ñs‚ğn‰ñ•\¦‚·‚é */
void put_stringn(const char s[], int n)
{
	while(n-- > 0)
		printf("%s", s);
}

/* •¶š—ñs‚Ì’·‚³‚ğ•Ô‚· */
int str_length(const char s[])
{
	int len = 0;
	while(s[len])
		len++;
	return len;
}

/* •¶š—ñs‚ğ‹t‚©‚ç•\¦ */
void put_stringr(const char s[])
{
	int i = str_length(s);
	while(i-- > 0)
		putchar(s[i]);
}

/* •¶š—ñs‚Ì•¶š‚Ì•À‚Ñ‚ğ”½“]‚·‚é */
void rev_string(char s[])
{
	int i, len = str_length(s);
	for(i = 0; i < len / 2; i++) {
		char temp = s[i];
		s[i]      = s[len-i-1];
		s[len-i-1]= temp;
	}
}

int main(void)
{
	char str[256], ch[256];
	
	printf("•¶š—ñstr‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢:");
	scanf("%s", str);
	
	printf("•¶šch‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢:");
	scanf("%s", ch);
	
	printf("str‚É‚Ích‚Í%dŒÂŠÜ‚Ü‚ê‚Ä‚¢‚Ü‚·B\n", str_chnum(str, ch[0]));
	
	printf("str‚ğ‹t‚©‚ç“Ç‚Ş‚Æ:");
	put_stringr(str);
	putchar('\n');
	
	rev_string(str);
	
	printf("str‚ğ”½“]‚µ‚Ü‚µ‚½B5‰ñ”½“]‚µ‚Ü‚·B\n");
	put_stringn(str, 5);
	putchar('\n');
	
	return 0;
}