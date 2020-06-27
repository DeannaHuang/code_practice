#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
	char a[100];
	int b[100]={};
	scanf("%s",&a);
	int l = strlen(a);
	for(int i=0;i<l;i++)
	{
		if(a[i]=='I')
			b[i]=1;
		else if(a[i]=='V')
			b[i]=5;
		else if(a[i]=='X')
			b[i]=10;
		else if(a[i]=='L')
			b[i]=50;
		else if(a[i]=='C')
			b[i]=100;
		else if(a[i]=='D')
			b[i]=500;
		else if(a[i]=='M')
			b[i]=1000;
		//printf("%d\n", b[i]);
 	}
 	int answer=0;
 	for(int i=0;i<l;i++)
 	{
 		if(b[i]==0)
 			continue;
 		else if(b[i]>=b[i+1])
 			answer+=b[i];
 		else 
 		{
 			answer+=(b[i+1]-b[i]);
 			b[i+1]=0;
 		}	
 	}
 	printf("%d", answer);
	return 0;
}