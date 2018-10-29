#include <iostream>

using namespace std ;

main ()
{	
	int x,y,i,j ;
	cout << "-----------------" << endl ;
	cout << " Array Operation " << endl ;
	cout << "-----------------" << endl ;
	cout << " Input Range Of Array Row : " ;
	cin >> x ;
	cout << " Input Range Of Array Column : " ;
	cin >> y ;

	int arr[x][y] ;

	cout << endl ;

	cout << "-----------------" << endl ;
	cout << "   Input Array   " << endl ;
	cout << "-----------------" << endl ;
	for ( i = 0; i < x; i++ )
	{
		for ( j = 0; j < y; j++)
		{
			cout << "Input Array " << i << " : " ; cin >> arr[i][j] ;
		}
	}

	cout << endl ;

	cout << "-----------------" << endl ;
	cout << " OutPut Of Array " << endl ;
	cout << "-----------------" << endl ;
	for ( i = 0; i < x; i++ )
	{
		for ( j = 0; j < y; j++)
		{
			cout << " " << arr[i][j] ;
		}
		cout << endl ;
	}

	cout << endl ;
}

// This Is For Show With Text Input Array
// for ( i = 0; i < x; i++ )
// 	{
// 		for ( j = 0; j < y; j++)
// 		{
// 			cout << "Input Array " << i << " : " << arr[i][j] ;
// 		}
// 		cout << endl ;
// 	}