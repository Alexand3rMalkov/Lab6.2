#define _CRT_SECURE_NO_DEPRECATE
#include <locale.h>
#include <stdio.h>
#include <math.h>
int main() 
{
	setlocale(LC_ALL, "rus");
	double x;
	printf("¬ведите x:\n");
	scanf("%lf", &x);
	if (x < 3.2) 
		printf("%lf", pow(x, 4) + 9); 
	else 
		printf("%lf", -5 * pow(x, 2) + 7);
}