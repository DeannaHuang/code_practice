#include <stdio.h>
#include <stdlib.h>
void circle(int a)
{
	int sum = a*a*3;
	printf("%d\n", sum);
	return;
}
int main(int argc, char const *argv[])
{
	int n=2;
	circle(n);
	return 0;
}