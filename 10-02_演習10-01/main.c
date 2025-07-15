/* ó‚¯æ‚Á‚½®”‚ğ‚O`‚P‚O‚O‚Éû‚Ü‚é‚æ‚¤‚É’²®‚·‚é */

#include<stdio.h>

/* ó‚¯æ‚Á‚½®”‚ğ‚O`‚P‚O‚O‚Éû‚Ü‚é‚æ‚¤‚É’²®‚·‚é */
void adjust_point(int *n)
{
	if(*n < 0) *n = 0;
	if(*n > 100) *n = 100;
}

int main(void)
{
	int point;
	
	printf("ƒeƒXƒg‚Ì“_”:");
	scanf("%d", &point);
	
	adjust_point(&point);
	
	printf("“_”‚Í%d“_‚Å‚·B\n", point);
	
	return 0;
}