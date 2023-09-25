#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

main()
{
	setlocale(0, "Rus");

	int a, b, count;

	printf("Введите два числа: ");
	scanf("%d%d", &a, &b);

	count = 0;

	while (1)
	{
		count++;

		if (a > b)
			a %= b;
		else
			b %= a;

		if (a == 0)
			break;
		if (b == 0)
			break;
	}

	if (a == 0)
	{
		printf("НОД введённых чисел: %d", b);
		printf("\nШагов: %d", count);
	}
	else
	{
		printf("НОД введённых чисел: %d", a);
		printf("\nШагов: %d", count);
	}

	printf("\n\nВсё, готово!");
	printf("\nПрограмма завершена.\n");
}