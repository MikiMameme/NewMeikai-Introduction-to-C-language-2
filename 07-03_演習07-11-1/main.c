/* 0.0����1.0�܂�0.01�P�ʂŌJ��Ԃ��ėތ^�����߂�(float�ɂ��J��Ԃ�) */

#include<stdio.h>

int main(void)
{
	float x, sum = 0.0;
	
	for(x = 0.0; x <= 1.0; x += 0.01)
		sum += x;
		
	printf("0.00, 0.01, 0.02, ..., 1.00�̍��v��%f�ł��B\n", sum);
	
	return 0;
	
}
