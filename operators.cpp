#include"..\simple-project\operators.h"
#include <math.h>

double koren(double a, double b, double c)
{
	double d = b * b - 4 * a * c;
	if (d < 0) {
		return 0;
	}
	double x1 = (-b + sqrt(d)) / (2 * a);
	double x2 = (-b - sqrt(d)) / (2 * a);
	return (double)x1 + x2;
}