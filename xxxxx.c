#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	int tmp;
	if(a>b)
	{
		tmp=a;
		a=b;
		b=tmp;
	}
	if(a>c)
	{
		tmp=a;
		a=c;
		c=tmp;
	}
	if(b>c)
	{
		tmp=b;
		b=c;
		c=tmp;
	}

	printf("%d %d %d\n", a, b, c);
	if(a+b <= c)
		printf("No\n");
	else if(a*a+b*b < c*c)
		printf("Obtuse\n");
	else if(a*a+b*b == c*c)
		printf("Right\n");
	else if(a*a+b*b > c*c)
		printf("Acute\n");
	return 0;
}