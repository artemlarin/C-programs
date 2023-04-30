#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>

main()
{
	setlocale(0, "Rus");

	int a, b, c;

	printf("Введите три числа: ");
	scanf("%d%d%d", &a, &b, &c);

	printf("\nВведенные числа вводились в порядке возрастания: ");

	if (a <= b && b <= c)
		printf("да");
	else printf("нет");

	_getch();
}