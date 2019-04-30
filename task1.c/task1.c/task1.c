#include <stdio.h>
//Вариант 7
_Bool isInArea(double x, double y) {
	if ((-1 <= y && y <= 0 && -1 <= x && x <= 0) || (x >= 0 && y >= 0 && x*x+y*y<=1)) {
		return 1;
	} else {
		return 0;
	}
}
void main(void) {
	double x, y;
	scanf("%Lf%Lf", &x, &y);
	if (isInArea(x, y) == 1) {
		printf("hit\n");
	}
	else {
		printf("miss\n");
	}
	system("pause");
}