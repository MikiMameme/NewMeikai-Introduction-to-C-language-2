/* 正方形の面積から一辺の長さを求める */

#include<math.h>
#include<stdio.h>

int main(void)
{
	double area;
	
	puts("正方形の面積から一辺の長さを求めます。");
	printf("面積 :");
	scanf("%lf", &area);
	
	printf("一辺の長さは%fです。\n", sqrt(area));
	
	return 0;
}