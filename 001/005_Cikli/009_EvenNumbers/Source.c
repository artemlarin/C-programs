#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

main()
{
	setlocale(0, "Rus");

	int number, countNumber, countEven, x;

	printf("������� �����: ");
	scanf("%d", &number);
	printf("� ������ ����� ��� ����� ������: ");

	countNumber = 0;
	countEven = 0;

	while (number)
	{
		countNumber++;
		x = number % 10;
		if (x % 2 == 0)
			countEven++;
		number /= 10;
	}

	if (countNumber == countEven)
		printf("��");
	else
		printf("���");

	printf("\n\n��, ������!");
	printf("\n��������� ���������.\n");

}