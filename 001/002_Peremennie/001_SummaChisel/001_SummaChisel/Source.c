#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>

main()
{
	setlocale(0, "Rus");

	int a, b, c, d;

	printf("Введите три числа: ");
	scanf("%d%d%d", &a, &b, &c);

	d = a + b + c;

	printf("%d + %d + %d = %d", a, b, c, d);
	_getch;
}