#include <iostream>

using namespace std ;

void hello (int *x, int *y)
{
	*x = 100;
	*y = 200;
}

int main () {

	int x = 10;
	int y = 20;

	hello(&x, &y);

	printf ("x: %d\n", x);
	printf ("y: %d\n", y);
}