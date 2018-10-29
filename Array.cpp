#include <iostream>

using namespace std ;

main ()
{	
	int n,i ;
	cout << "-----------------" << endl ;
	cout << " Array Operation " << endl ;
	cout << "-----------------" << endl ;
	cout << " Input Range Of Array  : " ;
	cin >> n ;

	int arr[n] ;

	cout << endl ;

	cout << "-----------------" << endl ;
	cout << "   Input Array   " << endl ;
	cout << "-----------------" << endl ;
	for ( i = 0; i < n; i++ )
	{
		cout << "Input Array " << i << " : " ; cin >> arr[i] ;
	}

	cout << endl ;

	cout << "-----------------" << endl ;
	cout << " OutPut Of Array " << endl ;
	cout << "-----------------" << endl ;
	for ( i = 0; i < n; i++ )
	{
		cout << "Input Array " << i << " : " << arr[i] << endl ;
	}

	cout << endl ;
}