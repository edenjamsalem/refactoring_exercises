#include <stdio.h>

// This function asks the user for a number, and returns it as an integer

void get_number(int *nbr)
{

}

int main(void)
{
    int i;
    
	printf("insert number: ");
    scanf("%d", &i);

    if (i % 2 == 0)
        printf("your number is even");
    else
        printf("your number is odd");        
}