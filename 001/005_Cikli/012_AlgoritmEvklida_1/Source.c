#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

main()
{
	setlocale(0, "Rus");

	int a, b;

	printf("Введит два числа: ");
	scanf("%d%d", &a, &b);

	while (a != b)
	{
		if (a > b)
			a -= b;
		else
			b -= a;
	}

	printf("НОД введённых чисел: %d", a);

	printf("\n\nВсё, готово!");
	printf("\nПрограмма завершена.\n");
}