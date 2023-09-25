#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

main()
{
	setlocale(0, "Rus");

	int number, temp;

	printf("Введите целое число: ");
	scanf("%d", &number);
	printf("Есть две одинаковые цифры, стоящияе рядом: ");

	while (number != 0)
	{
		temp = number % 10;
		number /= 10;

		if (number % 10 == temp)
		{
			printf("Да");
			break;
		}
	}

	if (!number)
		printf("Нет");

	printf("\n\nВсё, готово!");
	printf("\nПрограмма завершена.\n");
}