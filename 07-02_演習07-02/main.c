/* 符号無し整数のシフトが2のべき乗での乗除算と等しいことを確認する */

#include<stdio.h>

/* ２のno乗を返す */
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
	
	printf("符号無し整数xをnビットシフトします。\n");
	printf("x:");	scanf("%u", &x);
	printf("n:");	scanf("%u", &n);
	
	m_pow = x * pow2(n);
	d_pow = x / pow2(n);
	
	l_sht = x << n;
	r_sht = x >> n;
	
	printf("[a] x × (２の%u乗) = %u\n", n, m_pow);
	printf("[b] x ÷ (２の%u乗) = %u\n", n, d_pow);
	printf("[c] x << %u = %u\n", n, l_sht);
	printf("[d] x >> %u = %u\n", n, r_sht);
	
	printf("[a]と[c]の値は一致%s。\n",
				(r_sht == d_pow) ? "します":"しません");
				
	printf("[b]と[d]の値は一致%s。\n",
				(r_sht == d_pow) ? "します":"しません");
				
	return 0;
}