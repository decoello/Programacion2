#include <iostream>

using namespace std;

int num1,num2,suma,mayor;



void ingresar(int &num1,int &num2){

cout<<"ingresar numero 1>";
cin>>num1;

cout<<"ingresar numero 2>";
cin>>num2;


}

void calcular(int num1,int num2,int &mayor, int &suma){



if (num1>num2){

    mayor = num1;
}else {

   mayor = num2;

  suma = num1+num2;

}

}

int main()
{

   num1=0;
   num2=0;

  ingresar(num1,num2);
  calcular(num1,num2,mayor,suma);


  cout<<"valor numero 1....."<<num1<<"\n";
  cout<<"valor numero 2....."<<num2<<"\n";
  cout<<"la suma es ....."<<suma<<"\n";
  cout<<"el mayor es"<<mayor<<"\n";






}
