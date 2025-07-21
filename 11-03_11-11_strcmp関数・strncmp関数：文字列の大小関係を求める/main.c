/* strcmpの実現例（コードのみ） */
int strcmp(const char *s1, const char *s2)
{
	while(*s1 == *s2) {
		if(*s1 == '\0')
			return 0;
		s1++;
		s2++;
	}
	return(unsigned char)*s1 - (unsigned char)*s2;
}

/* strncmpの実現例（コードのみ） */
int strncmp(const char *s1, const char *s2, size_t n)
{
	while(n && *s1 && *s2) {
		if(*s1 != *s2)
			return(unsigned char)*s1 - (unsigned char)*s2;
		s1++;
		s2++;
		n--;
	}
	if(!n) return 0;
	if(*s1) return 1;
	
	return -1;
}