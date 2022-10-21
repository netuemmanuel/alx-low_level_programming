#include <stdio.h>

void first(void)_attribute_((constructor));

/**
 * first - A funtion that prints first before main is executed
 *
 * Return: Nothing.
 */
void first(void)
{
	printf("You're beat! and yet, you must allow, \n");
	printf("I bore my house upon my back!\n");
}
