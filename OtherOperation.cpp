#include <iostream>

using namespace std ;

main ()
{
	int x = 10 ;
	int* y ;

	y = &x ;

	int c = x == 10 ? 1 : 0 ;

	cout << "size of x : " << sizeof(x) << endl ;
	cout << "address of x : " << &x << endl ;
	// cout << "address of y : " << z << end ;
	cout << "y : " << *y << endl ;
	cout << "c : " << c << endl ;
}