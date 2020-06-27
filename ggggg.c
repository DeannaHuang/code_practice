#include <stdio.h>
int a(int a, int b)
{
	int sum = 1;
	for(int i=1;i<=b;i++)
	{
		sum*=a;
	}
	return sum;	
}
int main(int argc, char const *argv[])
{
	int n;
	int m;
	scanf ("%d %d", &n, &m);
	int ans = a(n, m);
	printf("%d", ans);
	return 0;
}