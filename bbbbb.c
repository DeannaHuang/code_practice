#include <stdio.h>
#include <stdlib.h>
int add(int a, int b)
{
	int sum = a+b;
	return sum;
}
int min(int a, int b)
{
	int sum = a-b;
	return sum;
}
int times(int a, int b)
{
	int sum = a*b;
	return sum;
}
int divide(int a, int b)
{
	int sum = a/b;
	return sum;
}
int main(int argc, char const *argv[])
{
	int n=8;
	int m=2;
	int ans1 = add(n, m);
	int ans2 = min(n, m);
	int ans3 = times(n, m);
	int ans4 = divide(n, m);
	printf("%d %d %d %d", ans1, ans2, ans3, ans4);
	return 0;
}