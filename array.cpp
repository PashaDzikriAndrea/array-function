#include <iostream>
#include <string>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
  int angka []={1, 3,5,7,9};
    cout << "angka ="<< angka [0]<<endl;
    
    char huruf []={'A', 'I', 'U', 'E', 'O'};
    cout << " Huruf ="<< huruf [4]<<endl;
    
    string nama []={"Algis", "Osep", " Amel"};
    cout << " nama ="<< nama [0]<<endl;
    
    int nilai[3][4]={
    {80,85}, 
    {90,92,94,96},
    {75,78,79}
    };
cout << "Nilai ="<< nilai [1][3]<<endl;
}