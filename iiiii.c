#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
	int n, m;
	char a;
	scanf("%d%c%d",&n, &a, &m);
	if(a=='*')
	{
		printf("%d", n*m);		
	}
	if(a=='+')
	{
		printf("%d", n+m);
	}
	if(a=='-')
	{
		printf("%d", n-m);
	}	
		return 0;
	}
