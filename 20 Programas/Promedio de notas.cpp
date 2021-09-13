#include <iostream>
using namespace std;
main(){
	// aprobo cuando su promedio es >=61
	// reaprobo cuando su promedio es <61
	int nota1=0,nota2=0,nota3=0;
	float promedio=0;
	cout<<"Ingrese Nota 1:";
	cin>>nota1;
	cout<<"Ingrese Nota 2:";
	cin>>nota2;
	cout<<"Ingrese Nota 3:";
	cin>>nota3;
	promedio = (nota1+nota2+nota3)/3;
	cout<<"Su promedio es:"<<promedio<<endl;
	if (promedio>=61){
		cout<<"Aprobado"<<endl;
	}else{
		cout<<"Reprobado"<<endl;
	}
	// Colocar un mensaje extra
	if (promedio >=0 && promedio<61){
	 	cout<<"Mal Promedio"<<endl;
	 }
	 if (promedio >=61 && promedio <=81){
	 	cout<<"Promedio Normal"<<endl;
	 }
	 if (promedio >81){
	 	cout<<"Buen Promedio"<<endl;
	 }
	
	system("pause");
}
