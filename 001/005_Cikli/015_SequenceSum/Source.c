#define _CRT_SECURE_NO_WARNINGS
#include <math.h>
#include <stdio.h>

main()
{
	setlocale(0, "Rus");

	int c, z, t, x;
	float S, a, b;

	/*-----��������� ��������-----*/
	S = 0; z = 1;
	b = 2; t = 3; x = 3;
	a = 1; c = t * x;

	while (fabs(a) > 0.001)
	{
		S += a; // ���������� �����
		a = z * b / c; // ������ �������� ������������������

		/*-----������� � ���������� ����������*/
		z = -z;
		b += 2;
		t += 2;
		x *= 3;
		c = t * x;
	}

	printf("S = %10.3f", S);

	printf("\n\n��, ������!");
	printf("\n��������� ���������.\n");
}