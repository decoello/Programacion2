#include <iostream>

using namespace std;

int main()
{
    int numero,positivo;

    cout<<"ingresar el numero....:";
    cin>>numero;

    if ((positivo>0&&positivo<9)){
        cout<<"numero tiene una cifra \n";

    }else if((positivo>9&&positivo<99)){
        cout<<"numero tiene dos cifras \n";

    }else if((positivo>99)&&(positivo<999)){
        cout<<"numero tiene tres cifras \n";

    }else if((positivo>999)&&(positivo<9999)){
        cout<<"numero tiene cuatro cifras \n";

    }else if(positivo<0){

       positivo = numero * -1;


        cout<<"numero tiene mas de cuatro cifras \n";
    }

     cout<<"el numero es...:"<<positivo<<"\n";
}
