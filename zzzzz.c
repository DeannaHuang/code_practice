#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
	int n;
	scanf("%d", &n);
	int a[21];
	int b=100, c=0;
	int d;
	int flag = 0;
	int flag1= 0;
	for(int i = 0; i<n;i++)
		scanf("%d",&a[i]);
	for(int i = n-1; i >= 0;i--)
	{
		for(int j = 0; j <i; j++)
		{
			if(a[j] > a[j+1])
			{
				d=a[j];
				a[j]=a[j+1];
				a[j+1]=d;
			}
		}
	}
	for(int i = 0; i<n;i++)
		printf("%d ",a[i]);
	for(int i = 0; i<n;i++)
	{
		if(a[i]>=60)
		{
			flag = 1;
			if(a[i]<=b)
				b=a[i];
		}

		else
		{
			flag1= 1;
			if(a[i]>=c)
				c=a[i];
		}


	}
	if(flag1==0)
		printf("\nbest case\n%d", b);
	else if (flag==0)
		printf("\n%d\nworst case",c);
	else
			printf("\n%d\n%d",c,b);
	


	return 0;
}