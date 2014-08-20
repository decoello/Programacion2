#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

using namespace std;

int num,suma;
char resp;

int aleatorio1_1008(){

    int numx;

    srand(time(0));
    numx = 1 + rand()&(101-1);
    return numx;


}
char pedirrespuesta(){

    char respx;

    do{

        cout<<"desea continuar....>";
        cin.get(respx);

    _flushall();
    }while((respx !='S')and(respx !='N'));

return respx;

}


void sumanum(int num , int &suma){
suma += num;

}

int maximo(int num, int mayor){
    if (num>mayor){

        return num;

    }else{

      return mayor;

    }

}

int main()
{
    do{
        num = aleatorio1_1008();
        cout<<"el numero generado es....:"<<num<<"\n";

        resp = pedirrespuesta();
        sumanum(num,suma);

        mayor = maximo(num,mayor);


    }while(resp !='N');

    cout<<"la suma es....:"<<suma<<"\n";
    cout<<"el mayor es....:"<<mayor<<"\n";



}
