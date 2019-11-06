#include <stdio.h>

int main(void)
{
	int radian;

	printf("0-360도의 숫자만 입력하세요");
	scanf_s("%d", &radian);

	if (radian > 0 && radian < 90)
	{
		printf("제1사분면\n");
	}
	else if (radian == 0)
	{
		printf("양의 x축\n");
	}
	else if (radian > 90 && radian < 180)
	{
		printf("제2사분면\n");
	}
	else if (radian == 90)
	{
		printf("양의 x축\n");
	}
	else if (radian > 180 && radian < 270)
	{
		printf("제3사분면\n");
	}
	else if (radian == 180)
	{
		printf("음의 x축\n");
	}
	else if (radian > 270 && radian <= 360)
	{
		printf("제4사분면\n");
	}
	else
		printf("음의 y축\n");

	return 0;
}