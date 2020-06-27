#include<stdio.h>
#include<stdlib.h>
#include <string.h>
int main(int argc, char const *argv[])
{
	int x=0;
	int y=0;
	int time;
	int time1;
	int a;
	int b=1;
	scanf("%d", &time1);
	y+=time1*10;
	while(1)
	{	
		scanf("%d", &a);
		if(a==3)
		{
			printf("%d %d", x, y);
			return 0;
		}
			
		else
		{
				scanf("%d", &time);
				if(a==2)
				{
					if(b==1)
					{
						x+=(time-time1)*10;
						b=2;
					}
					else if(b==2)
					{
						y-=(time-time1)*10;
						b=3;
					}	
					else if(b==3)
					{
						x-=(time-time1)*10;
						b=4;
					}	
					else if(b==4)
					{
						y+=(time-time1)*10;
						b=1;
					}	
				}	
				else if(a==1)
				{
					if(b==1)
					{
						x-=(time-time1)*10;
						b=4;
					}
					else if(b==2)
					{
						y+=(time-time1)*10;
						b=1;
					}	
					else if(b==3)
					{
						x+=(time-time1)*10;
						b=2;
					}	
					else if(b==4)
					{
						y-=(time-time1)*10;
						b=3;
					}	
					
				}	
		}
		time1=time;
	}
	return 0;
}   	

