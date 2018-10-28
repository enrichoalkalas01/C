#include <iostream>

using namespace std ;

main () 
{

	int x = 10;
	int y = 20;

	cout << " X = " << x << endl ;
	cout << " Y = " << y << endl ;
	cout << endl ;
	
	if (x > 5 && x < 15)
	{
		cout << " x > 5 and x < 15 ? " << endl ; 
		cout << " Yes, x > 5 and x < 15 " << endl ;
	}
	
	cout << endl ;
	
	if (y < 5 || y > 15)
	{
		cout << " y < 5 or y > 15 ? " << endl ;	
		cout << " y > 15 " << endl ;
	}

	else
	{
		cout << " Error " << endl ;
	}

}