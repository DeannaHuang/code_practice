#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
	char a[100], b[100];
	scanf("%s %s", a,b);
	int n=strlen(a);
	int m=strlen(b);
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<m-1;j++)
		{
			if(i=n)
				printf("YES");
			else 
				printf("NO");
		
		}
	}
	
	return 0;
}