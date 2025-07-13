/* ”z—ñ‚ÉŠi”[‚³‚ê‚Ä‚¢‚é•¶Žš—ñ‚Ì•¶Žš‚Ì•À‚Ñ‚ð”½“] */

#include<stdio.h>

#define LEN 128					/* •¶Žš—ñ‚Ì’·‚³ */

/* •¶Žš—ñs‚Ì’·‚³‚ð•Ô‚· */
int str_length(const char s[])
{
	int len = 0;
	while(s[len])
		len++;
	return len;
}

/* •¶Žš—ñs‚Ì•¶Žš‚Ì•À‚Ñ‚ð”½“]‚·‚é */
void rev_string(char s[])
{
	int i, len = str_length(s);
	for(i = 0; i < len / 2; i++) {
		char temp = s[i];
		s[i]      = s[len-i-1];
		s[len-i-1]= temp;
	}
}

/* •¶Žš—ñ‚Ì”z—ñ‚Ì•¶Žš‚Ì•À‚Ñ‚ð”½“] */
void rev_strings(char s[][LEN], int n)
{
	int i;
	for(i = 0; i < n; i++)
		rev_string(s[i]);
}

/* •¶Žš—ñ‚Ì”z—ñ‚ð•\Ž¦ */
void put_strary(const char s[][LEN], int n)
{
	int i;
	for(i = 0; i < n; i++)
		printf("s[%d] = \"%s\"\n", i, s[i]);
}

int main(void)
{
	char cs[][LEN] = {"SEC", "ABC", "12345"};
	
	rev_strings(cs, 3);			/* ”½“] */
	
	put_strary(cs, 3);			/* •\Ž¦ */
	
	return 0;
}