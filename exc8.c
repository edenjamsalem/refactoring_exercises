#include <stdio.h>

char get_letter(void)
{

}

int is_alpha(char letter)
{
	
}

int main(void)
{
	char letter;

	letter = get_letter();
	if ((letter >= 'A' && letter <= 'Z') || (letter >= 'a' && letter <= 'z'))
		printf("%c is alphabetical", letter);
	else
		printf("%c is not alphabetical", letter);


}