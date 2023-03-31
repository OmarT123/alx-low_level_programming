#include <stdio.h>
#include "lists.h"

/**
 * startFunc - add constructor attribute to startFun() so it executes
 * before main()
 */

void startFunc(void) __attribute__ ((const));

/**
 * startFunc - function that executes before main method
 */

void startFunc(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
