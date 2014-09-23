#include <iostream>

using namespace std;

int main()
{
    int numero, n;

    cout<<"ingresar un numero...:";
    cin>>numero;

    if (numero>999){

        cout<<"numero debe ser menor a 3 cifras o menos";

    }else {
       if (numero>0){
        n= numero%10;
        numero = numero/10;

        cout<<n;

       }if (numero>0){
        n= numero%10;
        numero = numero/10;

        cout<<n;

       }if (numero>0){
        n= numero%10;
        cout<<n;

       }

    }

}
