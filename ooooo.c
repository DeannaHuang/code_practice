#include<stdio.h>
void print(int n)
{
	if(n<=1)
	{
		printf("%d\n",n);
		return;
	}
	else
	{
		print(n-2);
		printf("%d\n",n);
	}
}
int main(int argc, char const *argv[])
{
	print(9);
	return 0;
}
