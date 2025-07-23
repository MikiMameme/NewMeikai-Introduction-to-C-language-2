/* 構造体を返す関数 */

#include<stdio.h>

/* xyz構造体 */
struct xyz {
	int x;
	long y;
	double z;
};

/* キーボードから読み込んだ{x, y, z}の値を持つxyz構造体を返す */
struct xyz scan_xyz()
{
	struct xyz temp;
	
	printf("int型メンバxの値:");		scanf("%d", &temp.x);
	printf("long型メンバyの値:");	scanf("%ld", &temp.y);
	printf("double型メンバzの値:");	scanf("%lf", &temp.z);
	
	return temp;
}

int main(void)
{
	struct xyz s;
	
	s = scan_xyz();
	
	printf("s.x = %d\n", s.x);
	printf("s.y = %ld\n", s.y);
	printf("s,z = %f\n", s.z);
	
	return 0;
}