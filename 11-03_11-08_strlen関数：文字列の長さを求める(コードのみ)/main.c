/* 文字列sの長さを返す(コードのみ)*/
size_t strlen(const char *s)
{
	size_t len = 0;
	
	while (*s++)
	len++;
	
	return len;
}