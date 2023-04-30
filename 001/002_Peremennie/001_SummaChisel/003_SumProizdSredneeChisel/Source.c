#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>

main()
{
	setlocale(0, "Rus");

	int a, b, c;
	int sum, multi;
	float sred;

	printf("Введите три числа: ");
	scanf("%d%d%d", &a, &b, &c);

	sum = a + b + c;
	multi = a * b * c;
	sred = (float)(a + b + c) / 3;

	printf("%d + %d + %d = %d", a, b, c, sum);
	printf("\n%d * %d * %d = %d", a, b, c, multi);
	printf("\n(%d + %d + %d)/%d = %.2f", a, b, c, 3, sred);
	_getch;
}