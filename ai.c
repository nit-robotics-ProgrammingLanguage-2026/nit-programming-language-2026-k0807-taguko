#include <math.h>
#include <stdio.h>

void to_polar(double x, double y, double *r, double *theta)
{
	const double pi = 3.14159265358979323846;

	*r = sqrt(x * x + y * y);
	*theta = atan2(y, x) / 180.0 * M_PI;
}

int main(void)
{
	double x, y, r, theta;

	if (scanf("%lf %lf", &x, &y) != 2) {
		return 1;
	}

	to_polar(x, y, &r, &theta);
	printf("%.3f,%.2f", r, theta);

	return 0;
}
