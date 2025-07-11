/* 線形探索（逐次探索） */
#include<stdio.h>

#define NUMBER 5
#define FAILED -1

/* 要素数nの配列からkeyと一致する要素を探索 */
int search(const int v[], int key, int n)
{
	int i = 0;
	
	while(1) {
		if( i == n)
			return FAILED;
		if(v[i] == key)
			return i;
		i++;
	}
}
int main(void)
{
	int i, ky, idx;
	int vx[NUMBER];
	
	for(i = 0; i < NUMBER; i++) {
		printf("vx[%d] :", i);
		scanf("%d", &vx[i]);
	}
	printf("探す値 :");
	scanf("%d", &ky);
	
	idx = search(vx, ky, NUMBER);
	
	if(idx == FAILED)
		puts("\a探索に失敗しました。");
	else
		printf("%dは%d番目にあります。\n", ky, idx + 1);
		
	return 0;
}