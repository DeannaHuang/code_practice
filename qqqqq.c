#include <stdio.h>
int a = 0;
int f(int n)
{	
	a++;
	if(n==0)
		return 0;
	else if(n<=1)
		return 1;
	else 
		return f(n-1)+f(n-2);
}
int main(int argc, char const *argv[])
{
	int m;
	scanf("%d",&m);
	int sum = f(m);
	printf("%d %d",sum,a);
	return 0;
}  