#include <stdio.h>

int main(void)
{
	int radian;

	printf("0-360���� ���ڸ� �Է��ϼ���");
	scanf_s("%d", &radian);

	if (radian > 0 && radian < 90)
	{
		printf("��1��и�\n");
	}
	else if (radian == 0)
	{
		printf("���� x��\n");
	}
	else if (radian > 90 && radian < 180)
	{
		printf("��2��и�\n");
	}
	else if (radian == 90)
	{
		printf("���� x��\n");
	}
	else if (radian > 180 && radian < 270)
	{
		printf("��3��и�\n");
	}
	else if (radian == 180)
	{
		printf("���� x��\n");
	}
	else if (radian > 270 && radian <= 360)
	{
		printf("��4��и�\n");
	}
	else
		printf("���� y��\n");

	return 0;
}