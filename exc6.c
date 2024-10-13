#include <stdio.h>

// This function draws a rectangle of # symbols
void draw_rectangle(int height, int length)
{

}

int main(void)
{
    int i;
    int j;
    int height = 4;
    int length = 3;
    
    i = 0;
    while (i < height)
    {
        j = 0;
        while (j < length)
		{ 
            printf("#");
            j++;;
        }
        printf("\n");
        i++;;
    }
}