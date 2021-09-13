#include<iostream>
#include<stdio.h>
#include<string>
#include<math.h>
#include<cstdlib>

using namespace std;

int main (){
	int menu;
	cout<<"\n";
	cout<<"Seleccione una de las siguientes opciones: \n";
	cout<<"1. Suma, Resta, Multiplicacion y Division de dos numeros \n";
	cout<<"2. Determinar si un numero es par o impar \n";
	cout<<"3. Convertir de kilometros a millas, metros a pulgadas, de libras a kilos y viceversa \n";
	cout<<"4. Determinar si una palabra o un numero es palindromo \n";
	cout<<"5. Conversion de numeros arabigos a romanos (minimo 1,000) \n";
	cout<<"6. Conversion de numeros enteros a letras \n";
	cout<<"7. Conversion de numeros enteros con decimal a letras \n";
	cout<<"8. Una tabla de multiplicar \n";
	cout<<"9. Todas las tablas de multiplicar del 1 al 10 \n";
	cout<<"10. Una grafica de multiplicar \n";
	cout<<"11. Conversion de numeros decimales a binario \n";
	cout<<"12. Conversion de numeros decimales a hexadecimales \n";
	cout<<"13. Crear Figuras Geometricas Basicas \n";
	cout<<"14. Mover un punto en toda la pantalla \n";
	cout<<"15. Simular un Cajero Automatico \n";
	cout<<"16. Calcular la hipotenusa \n";
	cout<<"17. Promedio de notas \n";
	cout<<"18. Cambio de color en texto y fondo \n";
	cout<<"19. Longitud y diametro \n";
	cout<<"20. Calculo de perimetro \n";
	cout<<" \n";
	cout<<"Ingresar opcion";
	cin>> menu;
	getchar();
	system("cls");
	
	while (menu > 0){
		if (menu ==1){
