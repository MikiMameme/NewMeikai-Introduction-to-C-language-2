/* 0.0����1.0�܂�0.01�P�ʂŌJ��Ԃ��ėތ^�����߂�(int�ɂ��J��Ԃ�) */

#include<stdio.h>

int main(void)
{
	int i;
	float sum = 0.0;
	
	for(i = 0; i <= 100; i++)
		sum += i / 100.0;
		
	printf("0.00, 0.01, 0.02, ..., 1.00�̍��v��%f�ł��B\n", sum);
	
	return 0;
	
}
