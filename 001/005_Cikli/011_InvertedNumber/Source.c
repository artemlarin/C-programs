#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

main()
{
	setlocale(0, "Rus");

	int number, x;

	printf("������� ����� �����: ");
	scanf("%d", &number);
	printf("������������ �����: ");

	while (number != 0)
	{
		x = number % 10;
		printf("%d", x);
		number /= 10;
	}

	printf("\n\n��, ������!");
	printf("\n��������� ���������.\n");
}