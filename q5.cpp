#include <iostream>
using namespace std;
int main(){

    int dias;
    cin >> dias;
   
    int ano = dias/365;
    int resto = dias%365;
    int mes = resto/30;
    int dias_reais = resto%30;
    
    cout << ano << endl;
    cout << mes << endl;
    cout << dias_reais;
    
    
    return 0;
    
}
