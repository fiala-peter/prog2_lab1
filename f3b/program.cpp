/**
 * L1 labor F3/B feladat
 * - Másold be az F3/A feladat main függvényének tartalmát, és írd át úgy, hogy
 *   a cstdio helyett az iostream-et használod, illetve nem használod a cstdlib-et.
 */

#include <iostream>

void swapUsingPointers(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void swapUsingReferences(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}

int main()
{
	return 0;
}
