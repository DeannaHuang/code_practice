#include <stdio.h>
#include <stdlib.h>
struct node{
    int number;
    struct node *next;
};

int main(int argc, char const *argv[])
{
	
	struct node *a;
    struct node *previous = NULL;
    for (int i = 0; i < 1000; i++){
        a = (struct node*)malloc(sizeof(struct node)); // 宣告一個struct (=struct node a;)
        a->number = (i+1);
        a->next = previous;
        previous = a;
    }
 	struct node* ptr;
    ptr = a;
    while(ptr != NULL){
        printf("%d ", ptr->number);
        ptr = ptr->next;
    }
    printf("\n");
	return 0;
}

