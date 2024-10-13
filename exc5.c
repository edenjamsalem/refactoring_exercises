#include <stdio.h>

// This function draws a square of # symbols
void draw_square(int size)
{

}

int main(void)
{
    int i;
    int j;
    int size;
    
    size = 4;
    i = 0;
    while (i < size)
    {
        j = 0;
        while (j < size)
		{ 
            printf("#");
            j++;;
        }
        printf("\n");
        i++;;
    }
}