/* ������̔z���ǂݍ���ŕ\�� */

#include<stdio.h>

#define NUM 100
#define LEN 128

/* ������̔z���\�� */
void put_strary(const char s[][LEN], int n)
{
	int i;
	for(i = 0; i < n; i++)
		printf("s[%d] = \"%s\"\n", i, s[i]);
}

/* ������̔z��ɕ������ǂݍ��� */
int get_strary(const char s[][LEN], int n)
{
	int i, no = n;
	
	for(i = 0; i < n; i++) {
		printf("s[%d] : ", i);
		scanf("%s", s[i]);
		if(s[i][0]=='$' && s[i][1]=='$' && s[i][2]=='$' && s[i][3]=='$' &&
			s[i][4]=='$' && s[i][5]=='\0') {
			no = i;
			break;
		}
	}
	return no;
}

int main(void)
{
	int no;
	char s[NUM][LEN];
	
	printf("%d�̕��������͂���(\"$$$$$\"�Œ��f)�B\n", NUM);
	no = get_strary(s, NUM);
	
	put_strary(s, no);
	
	return 0;
}