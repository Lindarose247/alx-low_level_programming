#include <stdio.h>
<<<<<<< HEAD


/**
* premain - Print before main prints
* Return: void
*/
=======

void __attribute__((constructor)) hare(void);
>>>>>>> 6d8623049ec69af71934c55204917bcaf1b5aaf8

/**
 * hare - Prints a string before the
 *        main function is executed.
 */
void hare(void)
{
	printf("You're beat! and yet, you must allow,\n"
	       "I bore my house upon my back!\n");
}
