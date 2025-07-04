/* 符号無しの整数の任意の連続ビットを操作する */

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


/* xを左にnビットシフトした値を返す */
unsigned lsft(unsigned x, int n)
{
	return(n <= 0 || n >= int_bits()) ? x : (x << n);
}


/* xのposビット目からnビットを1にした値を返す */
unsigned set_n(unsigned x, int pos, int n)
{
	return x | lsft(~lsft(~0, n), pos);
}


/* xのposビット目からnビットを0にした値を返す */
unsigned reset_n(unsigned x, int pos, int n)
{
	return x & ~lsft(~lsft(~0, n), pos);
}


/* xのposビット目からnビットを反転した値を返す */
unsigned inverse_n(unsigned x, int pos, int n)
{
	return x ^ lsft(~lsft(~0, n), pos);
}


int main(void)
{
	unsigned x, pos, n;
	
	puts("符号無し整数xの第posビット～"
			"第pos+n-1ビットを操作します。");
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