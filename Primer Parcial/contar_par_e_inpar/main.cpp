#include <iostream>

using namespace std;

int main()
{
    int num, cpar, cimpar;
    int conta=0;

    cpar=0; cimpar=0;

    while(conta<5){
    cout<<"ingresar un numero...:";
    cin>>num;

    if ((num%2)==0){

        cpar++;
    }else {
        cimpar++;
    }
        conta++;
    }

    cout<<"numeros pares...:"<<cpar<<"\n";
    cout<<"numeros impares...:"<<cimpar<<"\n";





}
