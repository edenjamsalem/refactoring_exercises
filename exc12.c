#include <stdio.h>

// this function counts how many odd numbers are in an array
int odd_count(int *arr)
{
	
}

int main(void) {
    int i;
    int odd_count;
    int arr[] = {1, 2, 3, 4, 7, 10, 12, 70, 69, 42};

    i = 0;
    odd_count = 0;
    while (i < 10)
    {
        if (arr[i] % 2 == 1)
            odd_count++;
        i++; 
    }
    printf("%d", odd_count);
}