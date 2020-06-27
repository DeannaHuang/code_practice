#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
	char string[100];
	scanf("%s", string);
	int a = strlen(string);
	for(int i=0;i<a/2;i++)
	{
		if(string[i]!=string[a-1-i])
		{
			printf("NO\n");
			break;
		}
		else
		{
			if(i == a/2-1)
				printf("YES\n");
			else
				continue;
		}
	}
	return 0;
}