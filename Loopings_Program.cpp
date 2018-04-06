/*
	Name : Enricho Alkalas
	City : Depok Indonesia
	Program Name : Looping
*/

#include <iostream>

using namespace std ;

void looping_for(int x);
void looping_while(int x);
void looping_do_while(int x);

int main ()
{
	int n ;
	cout << " This Is Looping Programs " << endl ;
	cout << " Input Number : " ;
	cin >> n ;

	cout << endl  ;

	//for_looping
	cout << " This Is For Looping " << endl ;
	looping_for(n);
	cout << endl << endl ;
	//while_looping
	cout << " This Is While Looping " << endl ;
	looping_while(n);
	cout << endl << endl;
	//do_while_looping
	cout << " This Is Do While Looping " << endl ;
	looping_do_while(n);
	cout << endl << endl ;
}

void looping_for(int x)
{
	for (int i=1; i<=x; i++)
	{
		cout << " " << i ;
	}
}

void looping_while(int x)
{
	int i=1 ;
	while(i<=x)
	{
		cout << " " << i ;
		i++ ;
	}
}

void looping_do_while(int x)
{
	int i=1;
	do
	{
		cout << " " << i ;
		i++ ;
	} while (i<=x) ;
}
