#include <iostream>

using namespace std ;

main ()
{
	int x,i ;
	cout << "---------------------------" << endl ;
	cout << "Input Number For Looping : ";
	cin >> x ;
	cout << "---------------------------" << endl ;

	cout << "---------------------------" << endl ;
	cout << "Looping With For Operation " << endl ;
	cout << "---------------------------" << endl ;
	
	for ( i = 0; i < x; i++ )
	{
		cout << "Looping For "<< i << endl ;
	} 

	cout << "-----------------------------" << endl ;
	cout << "Looping With While Operation " << endl ;
	cout << "-----------------------------" << endl ;

	i = 0 ;
	while ( i < x )
	{
		cout << " Looping While " << i << endl ;
		i++ ;
	}

	cout << "--------------------------------" << endl ;
	cout << "Looping With Do While Operation " << endl ;
	cout << "--------------------------------" << endl ;

	i = 0 ;
	do
	{
		cout << "Looping Do While " << i << endl ;
		i++ ;
	} while (i < x) ;
}