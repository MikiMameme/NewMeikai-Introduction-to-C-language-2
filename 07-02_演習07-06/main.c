/* �������������̎Z�p���Z���I�[�o�[�t���[���N�����Ȃ����Ƃ��m�F���� */

#include<stdio.h>
#include<limits.h>

int main(void)
{
	unsigned a;
	unsigned b;
	
	puts("�������������l�̘a�Ɛς����߂܂��B");
	printf("UINT_MAX��%u�ł��B\n", UINT_MAX);
	printf("UINT_MAX�𒴂������Z���ʂ�(UINT_MAX + 1)�Ŋ�������]�ƂȂ�܂��B\n");
	printf("a:");	scanf("%u", &a);
	printf("b:");	scanf("%u", &b);
	
	printf("a + b = %u\n", a + b);
	printf("a * b = %u\n", a * b);
	
	return 0;
}