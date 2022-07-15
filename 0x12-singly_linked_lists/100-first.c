#include <stdio.h>
#include <stdlib.h>

/**
 * premain - prints before the main function
 *
 */

void __attribute__ ((constructor)) premain()
{
	printf("You're beat! and yet, you must allow,");
	printf("I bore my house upon my back!\n");
}
