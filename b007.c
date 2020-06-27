#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
	char string[100];
	scanf("%s", string);
	int a = strlen(string);
	for(int i=a-1;i>=0;i--)
	{
		printf("%c", string[i]);
	} 
	return 0;
}