#include "list.h"
/**
 * beforeMain - runs before main func
 */
void __attribute__((constructor)) beforeMain()
{
	printf("You're beat! and yet, you must allow,\n%s",
			"I bore my house upon my back!\n");
}
