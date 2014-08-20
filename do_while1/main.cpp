#include <iostream>
#include <stdio.h>


using namespace std;

int main()
{
    int num, mayor;
    char resp;

    do {
        cout<<"ingresar numero....:";
        cin>>num;
        _flushall();

        if(mayor<num){

            mayor=num;
        }

    do{
        cout<<"desea continuar?...:";
        cin.get(resp);
        _flushall();

      }while((resp!='S')and(resp!='N'));

      _flushall();

    }while(resp!='N');
    cout<<"el numero mayor es ....:"<<mayor<<"\n";
}
