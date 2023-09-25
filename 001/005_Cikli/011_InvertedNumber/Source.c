#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

main()
{
	setlocale(0, "Rus");

	int number, x;

	printf("Введите целое число: ");
	scanf("%d", &number);
	printf("Перевернутое число: ");

	while (number != 0)
	{
		x = number % 10;
		printf("%d", x);
		number /= 10;
	}

	printf("\n\nВсё, готово!");
	printf("\nПрограмма завершена.\n");
}