#include <iostream>
using namespace std;

int main(){
	int a=0,b=0;
	string palabra= " ";
	cout<<"Ingrese una palabra o numero: "<<endl;
	cin >> palabra;
	for(a=0;a<palabra.length();a++){
		for(b=palabra.length()-1;b>=0;b--){
			if(palabra[a]==palabra[b]){
				cout<<"es palindroma "<<endl;
			}
		else{
			cout<<"no es palindroma "<<endl;
			}
		}
	}
	return 0;
}
