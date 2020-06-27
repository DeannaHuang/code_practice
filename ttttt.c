#include<stdio.h>
int main(int argc, char const *argv[])
{
	int array[10];
	int *ptr;
	int n;
	scanf("%d", &n);
	for(int i=0; i<n; i++)
		scanf("%d", &array[i]);
	ptr=array;
	for(int i=0; i<n; i++)
		*(ptr+i) *= 10;
	for(int i=0; i<n; i++)
		printf("%d", *(ptr+i));
	return 0;
}