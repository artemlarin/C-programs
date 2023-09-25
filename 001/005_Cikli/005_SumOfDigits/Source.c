#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

main()
{
	setlocale(0, "Rus");

	int number, sum, copyNumber;
	int residualPart;

	printf("Введите целое число: ");
	scanf("%d", &number);

	copyNumber = number;
	sum = 0;

	while (number != 0)
	{
		residualPart = number % 10;
		number /= 10;

		sum += residualPart;
	}

	printf("\nСумма цифр числа %d равна %d.", copyNumber, sum);

	printf("\n\nВсё, готово!\n");
	printf("Программа завершена.\n");
}