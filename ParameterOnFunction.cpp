#include <iostream>

using namespace std ;

int hitung_luas(int panjang, int lebar);

int main ()
{
    int x,y ;
    cout << "Input First Number : " ;
    cin >> x ;
    cout << "Input Second Number : " ;
    cin >> y ;

    int result = hitung_luas(x, y);
    cout << "Result : " << result ;
}

int hitung_luas(int panjang, int lebar)
{
    int operation = panjang * lebar ; 
    
}