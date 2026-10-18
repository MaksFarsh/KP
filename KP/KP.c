#include <stdio.h>
#include <locale.h>
#include <math.h>
#define _CRT_SECURE_NO_WARNINGS

void main() {
	double x, Q, Q0 = 50, dQ;
	setlocale(LC_ALL, "RUS");
	puts("Укажите электропроводность смеси");
	scanf("%lf", &x);
	if (x < 3)
		Q = 6 * sqrt(x - 3 + 1) + 5;
	else if (3 <= x <= 10)
		Q = 2 * (x - 6.5) + 50;
	else
		Q = 0.25 * pow((x - 10), 2) + 55;
	printf("\nQ = %.2lf", Q);
	dQ = fabs(Q - Q0);
	printf("\ndQ = %.2lf", dQ);
	if (dQ > 10)
		puts("\nОшибка! Значения вне диапазон 3-11!");
}