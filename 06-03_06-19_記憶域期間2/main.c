/* �ÓI�L�����Ԃ����I�u�W�F�N�g�̈Öق̏��������m�F */
#include<stdio.h>

int fx;

int main(void)
{
	int i;
	static int		si;
	static double	sd;
	static int		sa[5];
	
	printf("fx = %d\n", fx);
	printf("si = %d\n", si);
	printf("sd = %d\n", sd);
	
	for(i = 0; i < 5; i++)
		printf("sa[%d] = %d\n", i, sa[i]);
		
	return 0;
}