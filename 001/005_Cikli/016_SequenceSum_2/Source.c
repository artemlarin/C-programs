#define _CRT_SECURE_NO_WARNINGS
#include <math.h>
#include <stdio.h>

main()
{
	setlocale(0, "Rus");

	int c, z, t, x, t1, temp;
	float S, a, b;

	/*-----начальные значения-----*/
	S = 0; z = 1;
	b = 2; t = 2; t1 = 1; x = 3;
	a = 1; c = t * x;


	while (fabs(a) > 0.001)
	{
		S += a; // увеличение суммы
		a = z * b / c; // Расчет элемента последовательности

		/*-----переход к следующему слагаемому*/
		z = -z;
		b += 2;

		temp = t;
		t = t + t1;
		t1 = temp;

		x *= 3;
		c = t * x;
	}

	printf("S = %10.3f", S);

	printf("\n\nВсё, готово!");
	printf("\nПрограмма завершена.\n");
}