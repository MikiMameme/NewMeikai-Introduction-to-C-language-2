/* �x��𔭂��Ȃ���\�����s���}�N���i�R���}���Z�q�j */

#include<stdio.h>

#define puts_alert(str) ( putchar('\a'), puts(str) )

int main(void)
{
	int n;
	
	printf("��������͂��Ă�������:");
	scanf("%d", &n);
	
	if(n)
		puts_alert("���̐��̓[���ł͂���܂���B");
	else
		puts_alert("���̐��̓[���ł��B");
		
		return 0;
}