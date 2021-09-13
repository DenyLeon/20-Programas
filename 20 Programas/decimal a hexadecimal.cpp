#include <iostream>

using namespace std;

int main ()
{
	int digito[20];
	int decimal, residuo, resultado, n=0;
	
	cout<< "Ingrese un numero: "<<endl;
	cin>> decimal;
	
	do
	{
		residuo = decimal % 16;
		resultado = decimal / 16;
		digito [n] = residuo;
		decimal = resultado;
		n++;
		
	} while  (resultado > 15);
	
	digito [n] = resultado;
	
	cout<< "El equivalente del numero es: ";
	for (int m=n; m>= 0; m--)
	{
		if  (digito[m] == 10)
		{
			cout <<"A";
		}
		if  (digito[m] == 11)
		{
			cout <<"B";
		}
		if  (digito[m] == 12)
		{
			cout <<"C";
		}
		if  (digito[m] == 13)
		{
			cout <<"D";
		}
		if  (digito[m] == 14)
		{
			cout <<"E";
		}
		if  (digito[m] == 15)
		{
			cout <<"F";
		}
		else
		{
			cout <<digito[m];
		}
	}	
	return 0;
}
	
	
