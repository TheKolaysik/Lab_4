#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>


void main() {
	setlocale(LC_ALL, "RUS");
	char c;
	int i;
	float f;
	double d;
	scanf("%c", &c);
	scanf("%d", &i);
	scanf("%f", &f);
	scanf("%le", &d);
	system("pause");
	printf("%c\t%i\t%x\n", c, c, c);
	printf("%d\t%f\n", i, 1. / i);
	printf("%.f\n%f\n", f, (f - (int)f));
	printf("%le", d);
}