#include <iostream>

using namespace std ;

main ()
{
	int a,b,c,d,e,f,g ;
	int x = 63 ;
	int y = 13 ;
	
	a = x & y ;
	b = x | y ;
	c = x ^ y ;
	d = ~x ;
	e = ~y ;
	f = x >> 2 ;
	g = x << 2 ;

	cout << " x & y : " << a << endl ;
	cout << " x | y : " << b << endl ;
	cout << " x ^ y : " << c << endl ;
	cout << " ~x : " << d << endl ;
	cout << " ~y : " << e << endl ;
	cout << " x >> 2 : " << f << endl ;
	cout << " x << 2 : " << g << endl ;
}