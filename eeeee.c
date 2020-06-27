#include <stdio.h>
float bmi(float a, float b)
{
	float sum = a/(b*b);
	return sum;
}
int main(int argc, char const *argv[])
{
	float n;
	float m;
	scanf ("%f %f", &n, &m);
	//printf("%lf %lf\n", n , m);
	float ans = bmi(n, m);
	printf("%lf", ans);
	return 0;
}