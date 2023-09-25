#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

main()
{
	setlocale(0, "Rus");

	int number, countNumber, countEven, x;

	printf("Введите число: ");
	scanf("%d", &number);
	printf("В данном числе все числа четные: ");

	countNumber = 0;
	countEven = 0;

	while (number)
	{
		countNumber++;
		x = number % 10;
		if (x % 2 == 0)
			countEven++;
		number /= 10;
	}

	if (countNumber == countEven)
		printf("Да");
	else
		printf("Нет");

	printf("\n\nВсё, готово!");
	printf("\nПрограмма завершена.\n");

}