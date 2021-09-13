#include <iostream>
#include <cstdlib>
using namespace std;

int numero=0;
int main(){
cout<<"Ingrese un numero: ";
cin>>numero;
div_t resultado;
resultado=div(numero,2);
if (resultado.rem>0)
{
cout <<"\n"<< numero << " es impar" << endl;
}
else {
    cout <<"\n"<< numero << " es par" << endl;
}
cin.get();
return 0;

}
