#include <iostream>
 
using namespace std;
 
int x;
 
int main(){
 
 
    cin>>x;
 
    for( int i=1 ; i<=x ; i++ ){
 
        for( int j=1 ; j<=i ; j++ ){
 
            cout<<"*";
 
        }
        cout<<"\n";
    }
 
    
    for( int i=(x-1) ; i > 0 ; i-- ){
 
        for( int j=1 ; j<=i ; j++ ){
 
            cout<<"*";
 
        }
        cout<<"\n";
    }
 
 	return 0;
}
