#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main() {
	//程序开头
	printf("欢迎使用guess_nuber 1.1.6\n数在1-100内\n");

	//设置随机数
	srand(time(0));
	int rand_number_ = rand() % 99 + 1;

	//定义猜的数
	int guess_number_ = 0;

	//程序主体
	int i;//轮数
	for (i = 0; i < 15; i++) {
		printf("第%d轮\n", i + 1);
		printf("请输入你猜的数:");
		scanf_s("%d", &guess_number_);
		if (guess_number_ > rand_number_)
		{
			puts("你猜的数字大了\n");
		}
		else if (guess_number_ < rand_number_)
		{
			puts("你猜的数字小了\n");
		}
		else
		{
			puts("恭喜！你猜对了！\n");
			break;
		}
	}

	//程序末尾
	if (i < 15)
	{
		puts("欢迎下次再来！\n");
	}
	else
	{
		puts("你失败了！\n");
		printf("数是%d\n", rand_number_);
	}
	return 0;
}