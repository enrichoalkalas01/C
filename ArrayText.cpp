#include <iostream>

using namespace std ;

main ()
{
	int i ;
	string arr[3] = { "HandPhone" , "Laptop" , "MacBook" } ; 
	
	cout << "----------------------" << endl ;
	cout << " Array Text Operation " << endl ;
	cout << "----------------------" << endl ;
	
	cout << "-----------------" << endl ;
	cout << " OutPut Of Array " << endl ;
	cout << "-----------------" << endl ;
	
	for ( i = 0; i < 3; i++ )
	{
		cout << "Array Nummber " << i << " : " << arr[i] << endl ;
	}

	cout << endl ;
}