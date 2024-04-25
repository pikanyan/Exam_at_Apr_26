#include <stdio.h>



int main(void)
{
	printf("%d\n", 'a');	// 'a' -> 0x61 -> 97
	printf("%d\n", 0x61);	//		  0x61 -> 97
	printf("%d\n", 97);		//                97

	printf("----------\n");

	printf("%c\n", 'a');	//				 'a'
	printf("%c\n", 0x61);	//       0x61 -> 'a'
	printf("%c\n", 97);		// 97 -> 0x61 -> 'a'

	printf("----------\n");

	printf("%x\n", 'a');	// 'a' -> 0x61
	printf("%x\n", 0x61);	//        0x61
	printf("%x\n", 97);		// 97  -> 0x61

	

	return 0;
}
