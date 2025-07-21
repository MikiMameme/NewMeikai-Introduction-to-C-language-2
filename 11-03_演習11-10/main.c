/* atoi,atol,atof�Ɠ���������s���֐������(�֐��̂�) */

#include<stdio.h>

/* ����ch�͋󔒗ޕ����� */
int is_whitespace(int ch)
{
	return ch == ' ' || ch == '\f' || ch == '\n' || ch == '\r' ||
			ch == '\t' || ch == '\v';
}

/* �������long�^�̒l�ɕϊ� */
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

/* �������int�^�̒l�ɕϊ� */
int strtoi(const char *nptr)
{
	return(int)strtol(nptr);
}

/* �������double�^�̒l�ɕϊ� */
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