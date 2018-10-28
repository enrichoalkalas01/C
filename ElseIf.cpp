#include <iostream>

using namespace std ;

main ()
{
	int nilai ;
	cout << " Input Your Point Answer : " ;
	cin >> nilai ;

	if (nilai >= 90 && nilai <=100)
	{
		cout << " Congratulation, Your Pass The Exam With The Highest Point " << endl ;
	}

	else if (nilai >= 60 && nilai < 90 )
	{
		cout << " Congratulation, Your Pass The Exam " << endl ;
	}

	else if (nilai > 0 && nilai < 60 )
	{
		cout << " Sorry, Your Not Pass The Exam " << endl ;
	}

	else
	{
		cout << " Error Input " << endl ;
	}
}