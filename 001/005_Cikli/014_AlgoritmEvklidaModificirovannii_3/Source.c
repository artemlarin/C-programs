#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

main()
{
	setlocale(0, "Rus");

	int a, b, count;

	printf("������� ��� �����: ");
	scanf("%d%d", &a, &b);

	count = 0;

	while (1)
	{
		count++;

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
	{
		printf("��� �������� �����: %d", b);
		printf("\n�����: %d", count);
	}
	else
	{
		printf("��� �������� �����: %d", a);
		printf("\n�����: %d", count);
	}

	printf("\n\n��, ������!");
	printf("\n��������� ���������.\n");
}