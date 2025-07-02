/* 配列中のある値を持つ全要素の添字を抽出 */
#include<stdio.h>

#define NUMBER 7
#define FAILED -1

/* 要素数nの配列vから値がkeyの全要素の添字をidxに格納して個数を返却 */
int search_idx(const int v[], int idx[], int key, int n)
{
	int i, count = 0;
	
	for (i = 0; i < n; i++){
		if (v[i] == key)
			idx[count++] = i;
			
	}
	return count;
}
int main(void)
{
	int i, ky, num;
	int vx[NUMBER];
	int pt[NUMBER];
	
	for(i = 0; i < NUMBER; i++){
		printf("vx[%d]:", i);
		scanf("%d", &vx[i]);
	}
	printf("探す値 :");
	scanf("%d", &ky);

	if((num = search_idx(vx, pt, ky, NUMBER)) == 0)
		puts("\aその値は含まれません。");
	else{
		printf("%dは%d個含まれます。\n", ky, num);
		for(i = 0; i < num; i++)
			printf("vx[%d], = %d\n", pt[i], vx[pt[i]]);
	}
	return 0;
	}