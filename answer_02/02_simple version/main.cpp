#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#define TM 60



int main(void)
{
	int input;

	scanf("%d", &input);

	printf("%d\n", input);
	printf("%d\n", input / TM);
	printf("%d\n", input % TM);



	return 0;
}
