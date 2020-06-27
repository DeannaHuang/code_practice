#include<stdio.h>
int main(int argc, char const *argv[])
{
	int a=3;
	int *ptr = &a;
	*ptr -= 5;
	printf("%p\n%p\n%d\n%d\n%p\n",*(&ptr), &(*ptr), *(*(&ptr)), *(&(*ptr)), &(*(&ptr)));
	return 0;
}