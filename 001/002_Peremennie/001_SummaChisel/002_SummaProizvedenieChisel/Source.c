#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>

main()
{
	setlocale(0, "Rus");

	int a, b, c, sum, multi;

	printf("Введите три числа: ");
	scanf("%d%d%d", &a, &b, &c);

	sum = a + b + c;
	multi = a * b * c;
	
	printf("%d + %d + %d = %d\n", a, b, c, sum);
	printf("%d * %d * %d = %d", a, b, c, multi);
	_getch;
}