/* �������������̃V�t�g��2�ׂ̂���ł̏揜�Z�Ɠ��������Ƃ��m�F���� */

#include<stdio.h>

/* �Q��no���Ԃ� */
unsigned pow2(unsigned no)
{
	unsigned pw = 1;
	
	while(no --)
		pw *= 2;
	return pw;
}

int main(void)
{
	unsigned m_pow, d_pow, l_sht, r_sht;
	unsigned x, n;
	
	printf("������������x��n�r�b�g�V�t�g���܂��B\n");
	printf("x:");	scanf("%u", &x);
	printf("n:");	scanf("%u", &n);
	
	m_pow = x * pow2(n);
	d_pow = x / pow2(n);
	
	l_sht = x << n;
	r_sht = x >> n;
	
	printf("[a] x �~ (�Q��%u��) = %u\n", n, m_pow);
	printf("[b] x �� (�Q��%u��) = %u\n", n, d_pow);
	printf("[c] x << %u = %u\n", n, l_sht);
	printf("[d] x >> %u = %u\n", n, r_sht);
	
	printf("[a]��[c]�̒l�͈�v%s�B\n",
				(r_sht == d_pow) ? "���܂�":"���܂���");
				
	printf("[b]��[d]�̒l�͈�v%s�B\n",
				(r_sht == d_pow) ? "���܂�":"���܂���");
				
	return 0;
}