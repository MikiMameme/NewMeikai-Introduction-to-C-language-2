/* �������������̔C�ӂ̃r�b�g�𑀍삷�� */

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
	return (x <= 0 || n >= int_bits()) ? x : (x << n);
}


/* x��pos�r�b�g�ڂ��P�ɂ����l��Ԃ� */
unsigned set(unsigned x, int pos)
{
	return x | lsft(1U, pos);
}


/* x��pos�r�b�g�ڂ�0�ɂ����l��Ԃ� */
unsigned reset(unsigned x, int pos)
{
	return x & ~lsft(1U, pos);
}


/* x��pos�r�b�g�ڂ𔽓]�����l��Ԃ� */
unsigned inverse(unsigned x, int pos)
{
	return x ^ lsft(1U, pos);
}

int main(void)
{
	unsigned x, pos;
	
	puts("������������x�̑�pos�r�b�g�𑀍삵�܂��B");
	printf("x  :");	scanf("%u", &x);
	printf("pos:");	scanf("%u", &pos);
	
	printf("\nx              =");	print_bits(x);
	printf("\nset(x, pos)    =");	print_bits(set(x, pos));
	printf("\nreset(x, pos)  =");	print_bits(reset(x, pos));
	printf("\ninverse(x, pos)=");	print_bits(inverse(x, pos));
	putchar('\n');
	
	return 0;
}