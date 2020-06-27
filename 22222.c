#include<stdio.h>
#include<stdlib.h>
int main(int argc, char const *argv[])
{
	int a, b;
	int n, sum, sum1;
	scanf("%d%d", &a, &b);
	n=b-a+1;
	sum=(a+b)*n/2;
	sum1=a+b+(n-2)*2;
	printf("%d %d", sum, sum1);
	return 0;
}