#include <stdio.h>

int	is_lowercase(char letter)
{

}

int	is_uppercase(char letter)
{

}

char *reverse_case(char str[])
{

}

int main(void) 
{
    char str[] = "Mike Rotch";
    int i;
    
    i = 0;
    while (str[i]!=0)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
        else if (str[i] >= 'a' && str[i] <= 'z')
            str[i] -= 32;
        i++;
    }
    printf("%s\n", str);
}
