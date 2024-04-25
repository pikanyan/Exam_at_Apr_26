#include <stdio.h>



int main(void)
{
	char input_character;

	scanf_s("%c", &input_character, sizeof(input_character));	// input 'a'

	printf("%c\n", input_character);							// output 'a'
	printf("%d\n", input_character);							// output 97



	return 0;
}
