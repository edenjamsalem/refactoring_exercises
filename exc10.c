#include <stdio.h>

int is_lowercase(char letter)
{
	
}

// This function converts the first character of each word to uppercase
char* title(char *str)
{

}

int main(void)
{
    char str[] = "i'm looking for amanda huggenkis";
	int i;

    if (str[0] >= 'a' && str[0] <= 'z')
        str[0] -= 32;
	i = 1;
    while (str[i] != '\0')
    {
        if (str[i] >= 'a' && str[i] <= 'z' && str[i - 1] == 32)
            str[i] -= 32;
        i++;
    }
    printf("%s\n", str);
}