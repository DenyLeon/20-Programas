#include <iostream>

using namespace std;

string toBinary(int n)
{
    string r;
    while (n != 0){
        r += ( n % 2 == 0 ? "0" : "1" );
        n /= 2;
    }
    return r;
}
int main() {
    int numero = 0;
    cout<<"Ingrese un numero: ";
	cin>>numero;

    cout << "decimal: " << numero << endl;
    cout << "binario : " << toBinary(numero) << endl;

    return 0;}
