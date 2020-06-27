#include <stdio.h>
float add(float a, float b)
{
	float sum = a+b;
	return sum;
}
int main(int argc, char const *argv[])
{
	float n = 5.55;
	float m = 6.444;
	float ans = add(n, m);
	printf("%lf", ans);
	return 0;
}