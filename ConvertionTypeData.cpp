#include <iostream>

using namespace std ;

main () 
{
	int x = 1998 ;
	float y = 20.14 ;

	int new_x = (int) y ;
	float new_y = (float) x ;
	char a = (char) new_y ;

	cout << " This Is Integer x : " << x << endl ;
	cout << " This Is Float y : " << y << endl ;
	cout << " This Is Convertion Float y to Int x : " << new_x << endl ;
	cout << " This Is Convertion Int x to Float y : " << new_y << endl ;
	cout << " This Is Convertion Int New Y to Char a : " << a << endl ;
}