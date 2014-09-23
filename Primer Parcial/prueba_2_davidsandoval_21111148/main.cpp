#include <iostream>
#include <stdlib.h>
#include <time.h>


using namespace std;

int main()
{
    int num;
    int mayor,menor,suma;
    double prom=0;
    int cd4;
    int x;

  srand(time(0));
   mayor =200, menor = 600,cd4=0;


  for(x=0; x<10;x++){



  num = 200 + rand()%(601-200);

  if(num%4 == 0){
    cd4++;
    suma+=num;
  }
  if (num > mayor){
    mayor = num;
  }
  if (num < menor){
    menor = num;
  }

  cout<<x<<"=====>"<<num<<"\n";



  }

   prom =  suma / cd4 ;

  cout<<"promedio de los numeros de 4...:"<<prom<<"\n";
  cout<<"numeros divisibles entre 4...:"<<cd4<<"\n";
  cout<<"menor...:"<<menor<<"\n";
  cout<<"mayor...:"<<mayor<<"\n";

}


