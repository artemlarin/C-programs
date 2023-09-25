#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

main()
{
	setlocale(0, "Rus");

	int number, count, quantity;

	printf("Введите число: ");
	scanf("%d", &number);

	count = 0;

	while (number != 0)
	{
		number = number / 10;
		count++;
	}

	printf("\nВаше число состоит из 3 цифр: ");

	quantity = (count == 3);

	if (quantity)
		printf("Да.\n");
	else
		printf("Нет.\n");

	printf("\nВсё, готово!\n");
	printf("Программа завершена.\n");

}