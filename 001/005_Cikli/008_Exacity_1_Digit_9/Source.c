#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

main()
{
	setlocale(0, "Rus");
	
	int number, cout;

	printf("������� �����: ");
	scanf("%d", &number);
	printf("� ������� ����� ����� 1 ����� 9: ");

	cout = 0;

	while (number)
	{
		if (number % 10 == 9)
			cout++;

		number /= 10;
	}

	if (cout == 1)
		printf("��.");
	else if (cout > 1)
		printf("���.");
	else
		printf("����� 9 �� �������.");

	printf("\n\n��, ������!");
	printf("\n��������� ���������.\n");
}