/* •¶š—ñs‚Ì’·‚³‚ğ•Ô‚·(ƒR[ƒh‚Ì‚İ)*/
size_t strlen(const char *s)
{
	size_t len = 0;
	
	while (*s++)
	len++;
	
	return len;
}