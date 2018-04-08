/*
	Name : Enricho Alkalas
	City : Depok Indonesia
	Program Name : Array
*/

#include <iostream>

using namespace std ;

int main ()
{
	int x ;
	cout << " Array " << endl ;
	cout << " Input Banyak Data : " ;
	cin >> x ;

	int array[x];

	for (int i=0; i<x; i++)
	{
		cout << " Index Ke - " << i << " : " ; 
		cin >> array[i] ; 
	}

	cout << endl ;
	
	//Output Array
	cout << " This Is Array " << endl ;

	for (int j=0; j<x; j++)
	{
		cout << " Data Index Ke - " << array[j] << endl ;
	}

}
