#include<stdio.h>
#include<stdlib.h>
int main(int argc, char const *argv[])
{
	int n;
	int a, b, c, d;
	scanf("%d", &n);
	for(int i=0; i<n; i++)
	{
		scanf("%d %d %d %d", &a, &b, &c, &d);
		if(a==0&&b==1&&c==0&&d==1)
			printf("A");
		if(a==0&&b==1&&c==1&&d==1)
			printf("B");
		if(a==0&&b==0&&c==1&&d==0)
			printf("C");
		if(a==1&&b==1&&c==0&&d==1)
			printf("D");
		if(a==1&&b==0&&c==0&&d==0)
			printf("E");
		if(a==1&&b==1&&c==0&&d==0)
			printf("F");
	}
	// 0101 0111 0010 1101 1000 1100
	return 0;
}wasuladado