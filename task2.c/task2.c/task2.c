#include <stdio.h>
//Вариант 7

double f(double x) {
	if (x > 3)
		return 1.2*pow(x, 2) - 3 * x - 9;
	else
		return	12 / (2 * pow(x, 2) + 1);
}
void main(void	) {
	double x;
	scanf("%Lf", &x);
	printf("Result: %f\n", f(x));
	system("pause");
}