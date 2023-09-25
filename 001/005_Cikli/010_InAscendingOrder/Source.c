#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

main()
{
	setlocale(0, "Rus");

	int number, x, countCheck, countNumber;

	printf("Введите целое число: ");
	scanf("%d", &number);
	printf("Все цифры расположены в порядке возрастания: ");

	countCheck = 0;
	countNumber = 0;

	while (number != 0)
	{
		countNumber++;
		x = number % 10;
		number /= 10;
		if (x > number % 10)
			countCheck++;
	}

	if (countNumber == countCheck)
		printf("Да");
	else
		printf("Нет");

	printf("\n\nВсё, готово!");
	printf("\nПрограмма завершена.\n");
}