#include <stdio.h>

//This function asks the user for a letter and returns it
void get_letter(char letter)
{

}

//This function checks if a letter is lowercase
int is_lower(char letter)
{

}

// This program prints how far along a letter is in the english alphabet
int main(void)
{
    char letter;

    printf("input letter: ");
    scanf("%c", &letter);
    
    if (letter >= 'a' && letter <= 'z')
        printf("%d", letter - 96);
    else
        printf("%c is not in the alphabet", letter);
}