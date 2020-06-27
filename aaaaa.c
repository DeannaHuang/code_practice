#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char const *argv[])
{
	char a[100];
	scanf("%s", &a);
	int n = strlen(a);
	for(int i=0;i < n; i++)
	{
		if(a[i] == 'A')
			printf("Y");
		else if(a[i] == 'B')
			printf("Z");
		else
			printf("%c", a[i]-2);
	}
	// printf("%s", a);
	return 0;
}