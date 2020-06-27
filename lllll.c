#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
	int a[10000];
	int n=strlen(a);
	for(int i=0;i<n;i++)
	{
		if(a[i]=='=')
		{
			int b=i
			break;	
		}
	}
	for(int j=b;j<n;j++)
	{
		if(a[j]>='0' && a[j]<='9')
			printf("%c", a[j]);
	}
	return 0;
}