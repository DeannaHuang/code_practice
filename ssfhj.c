#include <stdio.h>
struct student{
    int grade[50];
    int count;
};

float avg_grade(struct student *ptr){
	float sum = 0;
	int i; 
	for(i=0;i<3;i++){
		sum += ptr->grade[i];
	}
	sum \= ptr->count;
	return sum;
}
int main(int argc, char const *argv[])
{
	
	return 0;
}