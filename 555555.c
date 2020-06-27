#include<stdio.h>
#include<stdlib.h>
int main(int argc, char const *argv[])
{
	int a, b, c, d, e, f, g;
	int sum;
	scanf("%d%d%d%d%d%d%d", &a, &b, &c, &d, &e,&f,&g);
	sum=a+b+c+d+ a*e+b*e+c*e+ c*f+d*f+ e*g +f+g;
	printf("%d", sum);
	return 0;
}