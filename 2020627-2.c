#include<stdio.h>
#include<stdlib.h>
int main(int argc, char const *argv[])
{
	int a;
	int b;
	int h;
	int c;
	int d;
	int e;
	int f;
	scanf("%d%d%d%d%d", &a, &b, &h, &c, &d);
	e=(c*d*h)/(a*b-c*d);
	f=e+h;
	printf("%d", f);
	return 0;
}