#include <stdio.h>
int add(int a, int b)
{
	int sum=0;
	for(int i=a; i<=b; i++)
	{
		sum+=i;
	}
	return sum;
}
int main(int argc, char const *argv[])
{
	int n;
	int m;
	scanf("%d %d", &n, &m);
	int ans = add(n, m);
	printf("%d", ans);
	return 0;
}