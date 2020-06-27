#include<stdio.h>
#include<stdlib.h>
int main(int argc, char const *argv[])
{
	int digit;
	int a=0;
	int b=0;
	int c=0;
	int d;
	long long int n=0;
	long long int m=0;
	while(scanf("%d", &digit) != EOF)
	{
		a=a+1;
		if(a%2==0)
			n+=digit;
		else
			m+=digit;
		if(digit==0)
			b=b+1;
	}
	if(digit%2==0)
		c=1;
	else
		c=0;
	
	if((m-n)%11==0)
		d=1;
	else
		d=0;

	printf("%d\n%d\n%d\n%d\n", a, c, b, d);
	return 0;
}
