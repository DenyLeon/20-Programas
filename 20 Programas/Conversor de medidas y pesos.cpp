#include <iostream>
#include <cstdlib>
using namespace std;

int opcion;
float numero=0;
float resultado;

int main(){
	cout<<"Elegir operacion a realizar km a millas [1], mt a plg [2], lb a Klg [3], millas a Km [4], Plg a mt [5], Klg a Lb [6]."<<endl;
	
	cin>> opcion;
	cout<<"Ingrese el valor a convertir: ";
	cin>> numero;
	
	if (opcion==1){
		resultado = numero*0.621371;
		cout<<"El total en millas es: "<<resultado<<endl;
	}
	if (opcion==2){
		resultado = numero*39.3701;
		cout<<"El total en pulgadas es: "<<resultado<<endl;
	}
	if (opcion==3){
		resultado = numero*0.453592;
		cout<<"El total en kilogramo es: "<<resultado<<endl;
	}
	if (opcion==4){
		resultado = numero*1.60934;
		cout<<"El total en kilometros es: "<<resultado<<endl;
	}
	if (opcion==5){
		resultado = numero*0.0254;
		cout<<"El total en metros es: "<<resultado<<endl;
	}
	if (opcion==6){
		resultado = numero*2.20462;
		cout<<"El total en libras es: "<<resultado<<endl;
	}
	return 0;
}
