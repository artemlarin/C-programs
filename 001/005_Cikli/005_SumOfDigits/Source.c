#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

main()
{
	setlocale(0, "Rus");

	int number, sum, copyNumber;
	int residualPart;

	printf("������� ����� �����: ");
	scanf("%d", &number);

	copyNumber = number;
	sum = 0;

	while (number != 0)
	{
		residualPart = number % 10;
		number /= 10;

		sum += residualPart;
	}

	printf("\n����� ���� ����� %d ����� %d.", copyNumber, sum);

	printf("\n\n��, ������!\n");
	printf("��������� ���������.\n");
}