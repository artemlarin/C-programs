#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

main()
{
	setlocale(0, "Rus");

	int number, temp;

	printf("������� ����� �����: ");
	scanf("%d", &number);
	printf("���� ��� ���������� �����, �������� �����: ");

	while (number != 0)
	{
		temp = number % 10;
		number /= 10;

		if (number % 10 == temp)
		{
			printf("��");
			break;
		}
	}

	if (!number)
		printf("���");

	printf("\n\n��, ������!");
	printf("\n��������� ���������.\n");
}