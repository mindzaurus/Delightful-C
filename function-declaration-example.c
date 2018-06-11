#include <stdio.h>

int add_two_ints(int x, int y);

int main()
{
	int z = add_two_ints(3, 4);
}


int add_two_ints(int x, int y)
{
	return x + y;
}
