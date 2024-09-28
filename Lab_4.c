#include <stdio.h>
#include <locale.h>
#include <stdlib.h>


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
	printf("%c\n", c);
	printf("%d\n", i);
	printf("%f\n", f);
	printf("%le", d);
}