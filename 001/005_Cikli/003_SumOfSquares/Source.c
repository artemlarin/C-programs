#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

main()
{
	setlocale(0, "Rus");

	int sumSquares = 0;
	int number1, number2, squares;

	printf("Введите два числа: ");
	scanf("%d%d", &number1, &number2);

	if (number1 > number2)
	{
		printf("\nОшибка!!!\n");
		printf("Условия ввода для чисел: (a <= b)\n");
		printf("А у вас первое число больше второго.\n");
		printf("Повторите запуск программы.\n");
		printf("И введите корректные данные.\n");
		return;
	}

	while (number1 <= number2)
	{
		squares = number1 * number1;
		sumSquares += squares;
		number1++;
	}

	printf("\nСумма квадратов: %d", sumSquares);

	printf("\n\nВсё, готово!\n");
	printf("Программа зваершена.\n");
}