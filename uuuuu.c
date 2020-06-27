#include <stdio.h>
void a(int N, int start, int finish, int empty)
{
	if (N==0) return;
	a(N-1, start, empty, finish);
	printf("Ring %d from %d to %d\n", N, start, finish);
	a(N-1, empty, finish, start);
}
int main(int argc, char const *argv[])
{
	int n;
	scanf("%d", &n);
	a(n, 1, 3,2);


	return 0;
}