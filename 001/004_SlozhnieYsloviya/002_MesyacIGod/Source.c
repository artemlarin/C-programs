#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>

main()
{
	setlocale(0, "Rus");

	int month;

	printf("Введите номер месяца: ");
	scanf("%d", &month);

	if (month == 12 || month <= 2)
		printf("\nзима");
	else if (month >= 3 && month <= 5)
		printf("\nвесна");
	else if (month >= 6 && month <= 8)
		printf("\nлето");
	else if (month >= 9 && month <= 11)
		printf("\nосень");
	else printf("Вы ввели больше 12, в году 12 месяцев.");						

	_getch();
}