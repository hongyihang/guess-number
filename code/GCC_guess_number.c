#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main() {
	//����ͷ
	printf("��ӭʹ��GCC���ݰ�guess_nuber 1.1.6\n����1-100��\n");

	//���������
	srand(time(0));
	int rand_number_ = rand() % 99 + 1;

	//����µ���
	int guess_number_ = 0;

	//��������
	int i;//����
	for (i = 0; i < 15; i++) {
		printf("��%d��\n", i + 1);
		printf("��������µ���:");
		scanf("%d", &guess_number_);
		if (guess_number_ > rand_number_)
		{
			puts("��µ����ִ���\n");
		}
		else if (guess_number_ < rand_number_)
		{
			puts("��µ�����С��\n");
		}
		else
		{
			puts("��ϲ����¶��ˣ�\n");
			break;
		}
	}

	//����ĩβ
	if (i < 15)
	{
		puts("��ӭ�´�������\n");
	}
	else
	{
		puts("��ʧ���ˣ�\n");
		printf("����%d\n", rand_number_);
	}
	return 0;
}