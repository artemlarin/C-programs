#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

main()
{
	setlocale(0, "Rus");

	int number, count, quantity;

	printf("������� �����: ");
	scanf("%d", &number);

	count = 0;

	while (number != 0)
	{
		number = number / 10;
		count++;
	}

	printf("\n���� ����� ������� �� 3 ����: ");

	quantity = (count == 3);

	if (quantity)
		printf("��.\n");
	else
		printf("���.\n");

	printf("\n��, ������!\n");
	printf("��������� ���������.\n");

}