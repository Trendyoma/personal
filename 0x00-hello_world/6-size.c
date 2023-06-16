#include <stdio.h>
/**
 *  Size is not grandeur, and territory does not make a nation
 *  Return 0: (Successful)
 */

int main(void)
{
	char x;
	int y;
	long int z;
	long long int a;
	float b;

	printf("size of a char: %lu byte(s)\n", (unsigned long)sizeof(x));
	 printf("size of a int: %lu byte(s)\n", (unsigned long)sizeof(y));
	  printf("size of a long int: %lu byte(s)\n", (unsigned long)sizeof(z));
	   printf("size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(a));
	    printf("size of a float ; %lu byte(s)\n", (unsigned long)sizeof(b));
return (0);
}

