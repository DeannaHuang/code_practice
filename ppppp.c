#include<stdio.h>
int total(int n)
{
	if(n<=1)
		return 1;
	else
		return(n+total(n-1));
}
int main(int argc, char const *argv[])
{
	int a=total(200);
	printf("%d", a);
	return 0;
}