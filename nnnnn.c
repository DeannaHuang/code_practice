#include <stdio.h>
int main(int argc, char const *argv[])
{
	int d[1000]={0};
	int n;
	scanf("%d",&n);
	for (int i=1;i<=n;i++)
	{
		d[i] = i;
	}
	int m;
	scanf("%d",&m);
	for (int i=0;i<m;i++)
	{
		int a, b;
		scanf("%d%d", &a, &b);
		int c;
		c=d[a];
		d[a]=d[b];
		d[b]=c;
	}
	int p;
	scanf("%d",&p);
	for(int i=0;i<p;i++)
	{
		int e;
		scanf("%d",&e);
		for(int i=0;i<=n;i++)
		{
			if(d[i]==e)
			{
				d[i]=0;
			}
		}
	}
	for(int i=0;i<=n;i++)
	{
		if(d[i]!=0)
		{
			printf("%d ", i);
		}
	}
	return 0;
}