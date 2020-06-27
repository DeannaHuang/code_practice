#include<stdio.h>
#include<stdlib.h>
int main(int argc, char const *argv[])
{
	int n;
	int m;
	int a[20]={};
	scanf("%d", &n);
	for(int i=0; i<n; i++)
		scanf("%d", &a[i]);
	for(int j=0; j<n; j++)
	{
		if(a[j]==0)
		{	
			for(int i=j; i<n; i++)
			{
				if(a[i]!=0)
				{
					m=a[j];
					a[j]=a[i];
					a[i]=m;
					break;
				}	
			}

		}
	}
	for(int i=0; i<n; i++)	
		printf("%d ", a[i]);
	return 0;
}