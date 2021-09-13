#include <iostream>
using namespace std;
main(){

int inicio=0,fin=0,resultado=0;
cout<<"Ingrese la Tabla Inicial:";
cin>>inicio;
cout<<"Ingrese la Tabla Final:";
cin>>fin;

	for (int i=inicio;i<=fin;i++){
		for (int ii=1;ii<=10;ii++){
			resultado = i * ii;
			cout<<i<<" X "<<ii<<" = "<<resultado<<endl;
		
		}
		cout<<"____________________________"<<endl;
	}
	return 0;
}
