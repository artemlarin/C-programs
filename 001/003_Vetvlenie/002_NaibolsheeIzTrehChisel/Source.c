#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>

main()
{
	setlocale(0, "Rus");

	int a, b, c, max;

	printf("Введите три числа: ");
	scanf("%d%d%d", &a, &b, &c);

	if (a > b)
	{
		if (a > c)
		{
			max = a;
		}
	}

	if (b > a)
	{
		if (b > c)
		{
			max = b;
		}
	}

	if (c > a)
	{
		if (c > b)
		{
			max = c;
		}
	}

	printf("Наибольшее число: %d", max);
	_getch();
}