#include <iostream>

using namespace std ;

int main ()
{
	int x = 100;
	int y = 20;

	int result = x + y;
	cout << "This Is result X + Y : " << result << endl ;

	result = x - y;
	cout << "This Is result X - Y : " << result << endl ;

	result = x / y;
	cout << "This Is result X / Y : " << result << endl ;

	result = x * y;
	cout << "This Is result X * Y : " << result << endl ;

	result = y % x;
	cout << "This Is result X % Y : " << result << endl ;

	y++;
	cout << "This Is result Y++ : " << y << endl ;

	x--;
	cout << "This Is result X-- : " << x << endl ;
}