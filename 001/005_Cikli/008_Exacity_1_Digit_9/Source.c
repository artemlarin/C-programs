#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

main()
{
	setlocale(0, "Rus");
	
	int number, cout;

	printf("Введите число: ");
	scanf("%d", &number);
	printf("В веденом числе ровно 1 цифра 9: ");

	cout = 0;

	while (number)
	{
		if (number % 10 == 9)
			cout++;

		number /= 10;
	}

	if (cout == 1)
		printf("Да.");
	else if (cout > 1)
		printf("Нет.");
	else
		printf("Цифра 9 не найдена.");

	printf("\n\nВсё, готово!");
	printf("\nПрограмма завершена.\n");
}