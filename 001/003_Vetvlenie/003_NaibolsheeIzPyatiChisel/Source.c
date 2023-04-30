#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>

main()
{
	setlocale(0, "Rus");

	int a, b, c, d, e, max;

	printf("Введите пять чисел: ");
	scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);

	if (a > b)
		max = a;
	else
		max = b;
	if (c > max)
		max = c;
	if (d > max)
		max = d;
	if (e > max)
		max = e;

	printf("Наибольшее число %d", max);
}