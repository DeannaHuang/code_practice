#include<stdio.h>
#include<stdlib.h>
int main(int argc, char const *argv[])
{
	int a[10][10];
	int b[10][10];
	int step[11];
	int R, C, M;
	int tmp1;
	scanf("%d%d%d", &R, &C, &M);
	for(int i=0;i<R;i++)
	{
		for(int j=0;j<C;j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	for(int i=0;i<M;i++)
		scanf("%d", &step[i]);
	for(int k = M-1 ; k>=0 ;k--)
	{
		if(step[k]==1)
		{
			int tmp;
			for(int i = 0; i < R/2; i++)
			{
				for(int j=0; j<C;j++)
				{
					tmp=a[R-1-i][j];
					a[R-1-i][j]=a[i][j];
					a[i][j]=tmp;
				}
			}
			
		}
		else
		{
			for(int i=C-1; i>=0; i--)
			{
				for(int j=0; j<R; j++)
				{
					b[C-1-i][j]=a[j][i];
				}
			}
			for(int i=0; i<C; i++)
			{
				for(int j=0; j<R; j++)
				{
					a[i][j]=b[i][j];
				}
			}
			tmp1=C;
			C=R;
			R=tmp1;
		}
	}
	printf("%d %d\n", R, C);
	for(int i=0;i<R;i++)
	{
		for(int j=0;j<C;j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}