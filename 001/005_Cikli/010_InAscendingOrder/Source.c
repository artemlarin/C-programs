#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

main()
{
	setlocale(0, "Rus");

	int number, x, countCheck, countNumber;

	printf("������� ����� �����: ");
	scanf("%d", &number);
	printf("��� ����� ����������� � ������� �����������: ");

	countCheck = 0;
	countNumber = 0;

	while (number != 0)
	{
		countNumber++;
		x = number % 10;
		number /= 10;
		if (x > number % 10)
			countCheck++;
	}

	if (countNumber == countCheck)
		printf("��");
	else
		printf("���");

	printf("\n\n��, ������!");
	printf("\n��������� ���������.\n");
}