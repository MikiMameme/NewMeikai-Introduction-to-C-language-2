/* atoi,atol,atofと同じ動作を行う関数を作る(関数のみ) */

#include<stdio.h>

/* 文字chは空白類文字か */
int is_whitespace(int ch)
{
	return ch == ' ' || ch == '\f' || ch == '\n' || ch == '\r' ||
			ch == '\t' || ch == '\v';
}

/* 文字列をlong型の値に変換 */
long strtol(const char *nptr)
{
	int sign = 1;
	long x = 0;
	
	while(is_whitespace(*nptr))
		nptr++;
	
	switch(*nptr) {
		case '+' : nptr++; break;
		case '-' : nptr++; sign = -1; break;
	}
	
	for(x = 0; *nptr >= '0' && *nptr <= '9'; nptr++)
		x = x * 10 + (*nptr - '0');
		
	return sign * x;
}

/* 文字列をint型の値に変換 */
int strtoi(const char *nptr)
{
	return(int)strtol(nptr);
}

/* 文字列をdouble型の値に変換 */
double strtof(const char *nptr)
{
	int sign = 1;
	double x;
	double dec;
	
	while(is_whitespace(*nptr))
		nptr++;
		
	switch(*nptr) {
		case '+' : nptr++; break;
		case '-' : nptr++;	sign = -1; break;
	}
	
	for(x = 0.0; *nptr >= '0' && *nptr <= '9'; nptr++)
		x = x * 10.0 + (*nptr - '0');
	
	if(*nptr == '.')
		nptr++;
		
	for(dec = 1.0; *nptr >= '0' && *nptr <= '9'; nptr++)
		x = x + (dec /= 10.0) * (*nptr - '0');
		
	if(*nptr == 'E' || *nptr == 'e') {
		int exp;
		int sign = 1;
		
	switch (*++nptr) {
		case '+' : nptr++;	break;
		case '-' : nptr++; sign = -1; break;
	}
	
	for(exp = 0; *nptr >= '0' && *nptr <= '9'; nptr++)
		exp = 10 * exp + (*nptr - '0');
	
	switch(sign) {
		case 1 : while (exp-- > 0) x *= 10.0; break;
		case -1 : while (exp-- > 0) x /= 10.0; break;
		}
	}
	return sign * x;
}