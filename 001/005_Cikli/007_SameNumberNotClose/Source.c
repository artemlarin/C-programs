#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

main()
{
	setlocale(0, "Rus");

	int number, firstNumber, cout;
	int	numberToCheck;

	printf("������� ����� �����: ");
	scanf("%d", &number);

	printf("���� ��� ���������� �����, �� ������� �����: ");

	firstNumber = number % 10;
	cout = 0;

	while (number)
	{
		number /= 10;
		numberToCheck = number % 10;

		if (numberToCheck == firstNumber)
			cout++;
	}

	if (cout)
		printf("��");
	else
		printf("���");

	printf("\n\n��, ������!");
	printf("\n��������� ���������.\n");
}