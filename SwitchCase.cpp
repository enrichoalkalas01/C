#include <iostream>

using namespace std ;

main ()
{
	int input ;

	cout << "------------------------" << endl ;
	cout << "- 1. Handphone 		-" << endl ;
	cout << "- 2. Laptop 			-" << endl ;
	cout << "- 3. Ipad		 		-" << endl ;
	cout << "- 4. Earphone	 		-" << endl ;
	cout << "------------------------" << endl ;
	cout << " Input Your Choice Number : " ;
	cin >> input ;

	switch (input)
	{
		case 1 :
			cout << "Handphone" << endl ;
		break ;

		case 2 :
			cout << "Laptop" << endl ;
		break ;

		case 3 :
			cout << "Ipad" << endl ;
		break ;
		
		case 4 :
			cout << "Earphone" << endl ;
		break ;
	}
}