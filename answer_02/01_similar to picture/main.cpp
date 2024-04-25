#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#define TM 60



int main(void)
{
	int input;
	int m;
	int s;

	scanf("%d", &input);

	m = input / TM;
	s = input % TM;

	printf("%d\n", input);
	printf("%d, %d\n", m, s);



	return 0;
}
