#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>


void main() {
	setlocale(LC_ALL, "RUS");
	int a = 11, b = 3;
	printf("%d\t%f\t%le\n", (int)a/b , (float)a/b, (double)a/b);
}