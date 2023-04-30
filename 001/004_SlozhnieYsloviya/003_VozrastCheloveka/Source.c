#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>

main()
{
	setlocale(0, "Rus");

	int age;

	printf("Введите возраст: ");
	scanf("%d", &age);

	if (age % 10 == 1)
		printf("Вам %d год", age);

	else if (age >= 5 && age <= 20)
		printf("Вам %d лет", age);

	else if (age % 10 >= 2 && age % 10 < 5)
		printf("Вам %d года", age);

	else
		printf("Вам %d лет", age);

	_getch();
}