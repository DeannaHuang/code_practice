#include <stdio.h>
int main(int argc, char const *argv[])
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	if(c==0)
	{
		if(a==0&&b==0)
			printf("AND\nOR\nXOR");
		else if(a==0&&b!=0)
			printf("AND");
		else if(a!=0&&b==0)
			printf("AND");
		else if(a!=0&&b!=0)
			printf("XOR");
	}
	else if(c==1)
	{
		if(a==0&&b==0)
			printf("IMPOSSIBLE");
		else if(a==0&&b!=0)
			printf("OR\nXOR");
		else if(a!=0&&b==0)
			printf("OR\nXOR");
		else if(a!=0&&b!=0)
			printf("AND\nOR");
	}
	return 0;
}
 