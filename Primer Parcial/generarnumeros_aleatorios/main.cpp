#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{

    int num;
    int mayor,menor;
    int conta=0;
    int cd5;

  srand(time(0));
   mayor =0, menor = 500,cd5=0;


  while(conta<10){



  num = 200 + rand()%(501-200);

  if(num%5 == 0){
    cd5++;
  }
  if (num > mayor){
    mayor = num;
  }
  if (num < menor){
    menor = num;
  }

  cout<<cd5<<"=====>"<<num<<"\n";

    conta++;

  }

  cout<<"numeros divisibles entre 5...:"<<cd5<<"\n";
  cout<<"menor...:"<<menor<<"\n";
  cout<<"mayor...:"<<mayor<<"\n";

}
