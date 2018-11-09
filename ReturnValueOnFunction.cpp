#include <iostream>

using namespace std ;

int hitungluas2(int p, int l);

int main ()
{
    int x,y ;

    cout << "Input First Number : " ;
    cin >> x ;
    cout << "Input Second Number : " ;
    cin >> y ;

    int result ;

    result = hitungluas2(x,y) ;

    cout << "Result : " << result << endl ;
    
}

int hitungluas2(int p, int l)
{
    return p * l ;
}