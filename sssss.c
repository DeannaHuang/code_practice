#include<stdio.h>
void a(int *ptr){
	*ptr %= 10;
}
int main(int argc, char conb nst *argv[])
{
	int i=2007;
	a(&i);
	printf("%d", i);
	
	return 0;
}