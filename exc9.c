#include <stdio.h>

void get_letter(char letter)
{

}

int is_lowercase(char letter)
{
	
}

int is_uppercase(char letter)
{
	
}

int main(void)
{
	char letter;

	get_letter(letter);
	if ((letter >= 'A' && letter <= 'Z') || (letter >= 'a' && letter <= 'z'))
		printf("%c is alphabetical", letter);
	else
		printf("%c is not alphabetical", letter);


}