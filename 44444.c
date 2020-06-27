#include<stdio.h>
#include<stdlib.h>
int main(int argc, char const *argv[])
{
	int n, m;
	int a;
	int max=0;
	int sum=0;
	int maxmax[20];
	int flag=0;
	scanf("%d %d", &n, &m);
	for(int i=0; i<n; i++)
	{
		max=0;
		for(int j=0; j<m; j++)
		{
			scanf("%d", &a);
			if(a>max)
				max=a;
		}
		maxmax[i] = max;
		sum=sum+max;	
		
	}
	printf("%d\n", sum);
	for(int i=0; i<n; i++)
	{
		if(sum%maxmax[i]==0)
		{
			flag=1;
			printf("%d ", maxmax[i]);
		}
	}
	if(flag==0)
		printf("%d", -1);
	return 0;
}