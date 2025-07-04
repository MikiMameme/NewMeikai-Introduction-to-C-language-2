/* ���������̐����̔C�ӂ̘A���r�b�g�𑀍삷�� */

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


void print_bits(unsigned x)
{
    int i;
    for(i = int_bits() - 1; i >= 0; i--)
        putchar((x >> i) & 1U ? '1' : '0');
}


/* x������n�r�b�g�V�t�g�����l��Ԃ� */
unsigned lsft(unsigned x, int n)
{
	return(n <= 0 || n >= int_bits()) ? x : (x << n);
}


/* x��pos�r�b�g�ڂ���n�r�b�g��1�ɂ����l��Ԃ� */
unsigned set_n(unsigned x, int pos, int n)
{
	return x | lsft(~lsft(~0, n), pos);
}


/* x��pos�r�b�g�ڂ���n�r�b�g��0�ɂ����l��Ԃ� */
unsigned reset_n(unsigned x, int pos, int n)
{
	return x & ~lsft(~lsft(~0, n), pos);
}


/* x��pos�r�b�g�ڂ���n�r�b�g�𔽓]�����l��Ԃ� */
unsigned inverse_n(unsigned x, int pos, int n)
{
	return x ^ lsft(~lsft(~0, n), pos);
}


int main(void)
{
	unsigned x, pos, n;
	
	puts("������������x�̑�pos�r�b�g�`"
			"��pos+n-1�r�b�g�𑀍삵�܂��B");
	printf("x  :");	scanf("%u", &x);
	printf("pos:");	scanf("%u", &pos);
	printf("n  :");	scanf("%u", &n);
	
	printf("\nx                 =");	print_bits(x);
	printf("\nset(x, pos, n)    =");	print_bits(set_n(x, pos, n));
	printf("\nreset(x, pos, n)  =");	print_bits(reset_n(x, pos, n));
	printf("\ninverse(x, pos, n)=");	print_bits(inverse_n(x, pos, n));
	putchar('\n');
	
	return 0;
}