#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>


void main() {
	setlocale(LC_ALL, "RUS");
	int us_int, one, two, three;
	scanf("%d", &us_int);
	one = us_int / 100;
	two = (us_int % 100) / 10;
	three = us_int % 100 % 10;
	printf("Последняя цифра - %d\nПервая цифра - %d\nСумма цифр - %d\nОбратное - %d%d%d", three, one, one + two + three, three, two, one);
}