#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

main()
{
	setlocale(0, "Rus");

	int a, b;

	printf("������ ��� �����: ");
	scanf("%d%d", &a, &b);

	while (a != b)
	{
		if (a > b)
			a -= b;
		else
			b -= a;
	}

	printf("��� �������� �����: %d", a);

	printf("\n\n��, ������!");
	printf("\n��������� ���������.\n");
}