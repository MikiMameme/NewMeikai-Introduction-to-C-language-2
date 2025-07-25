/* 日付を表す構造体と人間を表す構造体 */

#include<stdio.h>

#define NAME_LEN 128

/* 日付を表す構造体 */
struct Date {
	int y;
	int m;
	int d;
};

/* 人間を表す構造体 */
typedef struct {
	char name[NAME_LEN];
	struct Date birthday;
} Human;

/* ポインタhが指す人間の氏名と誕生日を表示 */
void print_Human(const Human *h)
{
	printf("%s (%04d年%02d月%02日生まれ)\n",
				h->name, h->birthday.y, h->birthday.m, h->birthday.d);
}

int main(void)
{
	int i;
	struct Date today;
	
	Human member[] = {
		{"古賀政男", {1904, 11, 18}},
		{"柴田望洋", {1963, 11, 18}},
		{"岡田准一", {1980, 11, 18}},
	};
	
	printf("今日の日付を入力してください。\n");
	printf("年:");	scanf("%d", &today.y);
	printf("月:");	scanf("%d", &today.m);
	printf("日:");	scanf("%d", &today.d);
	
	printf("今日は%d年%d月%d日ですね。\n", today.y, today.m, today.d);
	
	printf("--- 会員一覧 ---\n");
	for(i = 0; i < sizeof(member) / sizeof(member[0]); i++)
		print_Human(&member[i]);
		
		return 0;
}