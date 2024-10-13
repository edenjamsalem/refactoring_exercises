#include <stdio.h>
/*
int get_number(void)
{

}

int is_prime(int number)
{
 
}
*/
int main(void)
{
    int number;
	int i;

    printf("insert number: ");
    scanf("%d", &number);

	if (number < 2)
	{
		printf("%d is not prime", number);
		return 0;	
	}
    i = 2;
    while (i < number)
    {
        if (number % i == 0)
		{
			printf("%d is not prime", number);
			return 0;
		}
        i++;   
    } 
    printf("%d is prime", number);
	return 0;
}