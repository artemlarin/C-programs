#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

main()
{
	setlocale(0, "Rus");

	int number1, number2, sum;

	printf("Введите два числа: ");
	scanf("%d%d", &number1, &number2);
	printf("\n");

	if (number1 > number2)
	{
		printf("Ошибка!!!\n");
		printf("Условия ввода для чисел: (a <= b)\n");
		printf("А у вас первое число больше второго.\n");
		printf("Повторите запуск программы.\n");
		printf("И введите корректные данные.\n");
		return;
	}

	while (number1 <= number2)
	{
		sum = number1 * number1;
		printf("%d * %d = %d", number1, number1, sum);
		number1++;
		printf("\n");
	}

	printf("\nВсё, готово!\n");
	printf("Программа завершена.\n");
}