#include <stdio.h>
#include "lists.h"

/**
 * startFunc - add constructor attribute to startFun() so it executes
 * before main()
 */

void startFunc(void);

/**
 * startFunc - function that executes before main method
 */

void __attribute__ ((constructor)) startFunc(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
