#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

main()
{
	setlocale(0, "Rus");

	int a, b;

	printf("������� ��� �����: ");
	scanf("%d%d", &a, &b);

	while (1)
	{
		if (a > b)
			a %= b;
		else
			b %= a;

		if (a == 0)
			break;
		if (b == 0)
			break;
	}

	if (a == 0)
		printf("��� �������� �����: %d", b);
	else
		printf("��� �������� �����: %d", a);