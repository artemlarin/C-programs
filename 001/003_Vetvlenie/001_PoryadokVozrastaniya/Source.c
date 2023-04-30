#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>

main()
{
	setlocale(0, "Rus");

	int a, b;

	printf("Введите два числа: ");
	scanf("%d%d", &a, &b);

	if (a < b)
	{
		printf("Числа в порядке возрастания: %d %d", a, b);
	}
	else
	{
		printf("Числа в порядке возрастания: %d %d", b, a);
	}
}