#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>


void main() {
	setlocale(LC_ALL, "RUS");
	int a = 11, b = 3;
	int x;
	float y;
	double z;
	x = a / b;
	y = a / b;
	z = a / b;
	printf("%d\t%f\t%le\n", x, y, z);
}