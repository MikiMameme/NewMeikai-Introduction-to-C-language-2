/* �O�`�U�T�T�R�T��10�i�E2�i�E8�i�E16�i�ŕ\�� */

#include<stdio.h>

int count_bits(unsigned x)
{
    int bits = 0;
    while (x) {
        if(x & 1U) bits++;
        x >>= 1;
    }
    return bits;
}


int int_bits(void)
{
    return count_bits(~0U);
}

/* unsigned�^����x�̉���n�r�b�g��\�� */
void print_nbits(unsigned x, unsigned n)
{
	int i = int_bits();
	i = (n < i) ? n - 1: i - 1;
	for( ; i >= 0; i--)
		putchar(((x >> i) & 1U) ? '1' : '0');
}

int main(void)
{
	unsigned i;
	
	for(i = 0; i <= 65535U; i++) {
		printf("%5u ", i);
		print_nbits(i, 16);
		printf(" %06o %04X\n", i, i);
	}
	
	return 0;
}