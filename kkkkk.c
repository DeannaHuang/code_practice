#include <stdio.h>
int main(int argc, char const *argv[])
{
	int a1=0;
	int a2=1;
	int a3;
	int n;
	scanf("%d", &n);
	for(int i=2; i <= n; i++)
	{
		a3=a1+a2;
		a1=a2;
		a2=a3;
	}
	printf("%d",a3);
	return 0;
}