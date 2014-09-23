#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
    int num,li,ls,cp,ci,sp,si,ppares,pimpares,conta;

    cout<<"ingresar limite inferior....:";
    cin>>li;

    cout<<"ingresar limite superior....:";
    cin>>ls;

    conta=0; cp=0; ci=0; sp=0; si;
    while(conta<10){

        conta++;
        num = li + rand()%((ls+1)-li);

        if(num%2==0){

            cp++;
            sp+=num;
        }else{
          ci++;
          si+=num;

        }

        ppares = sp / cp;
        pimpares = si / ci;


     }

     cout<<"promedio de impares es :"<<pimpares<<"\n";
     cout<<"promedio de pares es :"<<ppares<<"\n";

}
