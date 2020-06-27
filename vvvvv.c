#include <stdio.h>
struct time{
	int year;
	int month;
	int date;
	int hour;
	int minute;
	int second;
};
void e(struct time *time1, struct time *time2){
	int b, c, d;
	d  = time1-> second - time2-> second;
	if (d<0){
		time1->second += 60;
		d= time1->second - time2-> second;
		time1-> minute -= 1;
	}
	c = time1-> minute - time2-> minute;	
	if (c<0){
		time1->minute += 60;
		c= time1->minute - time2-> minute;
		time1-> hour -= 1;
	}
	b = time1-> hour - time2-> hour;
		printf("%d %d %d\n", b, c, d);
}

int main(int argc, char const *argv[])
{
	struct time a ={0, 0, 0, 0, 0, 0};
	a.hour = 8;
	a.minute = 12;
	a. second= 12;
	scanf("%d%d%d", &a.hour, &a.minute, &a.second);
	//printf("%d %d %d %d %d %d\n", a.year, a.month, a.date, a.hour, a.minute, a.second);
	
	struct time b ={0, 0, 0, 0, 0, 0};
	b.hour = 8;
	b.minute =11; 
	b. second= 11;
	scanf("%d%d%d", &b.hour, &b.minute, &b.second);
	//printf("%d %d %d %d %d %d\n", a.year, a.month, a.date, a.hour, a.minute, a.second);

	

	struct time *ptr, *ptr1;
	ptr = &a;
	ptr1 = &b;

	e(ptr, ptr1);
	ptr->year = 2006;
	printf("%d %d %d", a.hour, a. minute, a.second);
	//printf("%d %d %d %d %d %d\n", a.year, a.month, a.date, a.hour, a.minute, a.second);

	return 0;
}

