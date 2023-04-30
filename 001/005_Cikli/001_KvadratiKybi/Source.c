#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

main()
{
	setlocale(0, "Rus");

	int naturalNumber, n;
	int square, cube;

	printf("Введите натуральное число: ");
	scanf("%d", &naturalNumber);
	printf("\n");

	n = 1;

	while (n <= naturalNumber)
	{
		square = n * n;
		cube = n * n * n;
		printf("%d: %d %d", n, square, cube);
		n++;
		printf("\n");
	}

	printf("\nВсё, готово!\n");
	printf("Программа завершена.\n");
}