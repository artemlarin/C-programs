#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

main()
{
	setlocale(0, "Rus");

	int number, firstNumber, cout;
	int	numberToCheck;

	printf("Введите целое число: ");
	scanf("%d", &number);

	printf("Есть две одинаковые цифры, НЕ стоящие рядом: ");

	firstNumber = number % 10;
	cout = 0;

	while (number)
	{
		number /= 10;
		numberToCheck = number % 10;

		if (numberToCheck == firstNumber)
			cout++;
	}

	if (cout)
		printf("Да");
	else
		printf("Нет");

	printf("\n\nВсё, готово!");
	printf("\nПрограмма завершена.\n");
}