#include <stdio.h>

int main(int argc, char *argv[])
{
	argc = argc; /* bypass unused var warning for gcc */

	printf("%s\n", argv[0]);
	return 0;
}
