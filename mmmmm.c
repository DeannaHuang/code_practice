#include <stdio.h>
void print(int n)
{
	if(n<=1)
	{
		printf(" %d",n);
		return;
	}

	else
	{
		print(n-1);
		printf(" %d",n);
	}

}
int main(int argc, char const *argv[])
{
	print(10);
	return 0;
}