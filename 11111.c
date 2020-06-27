#include<stdio.h>
#include<stdlib.h>
int main(int argc, char const *argv[])
{
	int n;
	int sum=0;
	int sum1=0;
	scanf("%d", &n);
	int flag=0;
	while(n>10)
	{
		if(flag%2==0)
			sum+=n%10;
		else
			sum1+= n%10; 
		flag++;
		n=n/10;
	}
	if(flag%2==0)
		sum+=n;
	else
		sum1+=n; 
	int ans=abs(sum-sum1);
	printf("%d", ans);

	return 0;
}