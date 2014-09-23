#include <iostream>
#include <stdlib.h>


using namespace std;

int main()
{
  int dia=0;

  int mes=0;

  int a=0;

  cout<<"ingresar dia....:";
  cin>>dia;

  cout<<"ingresar mes....:";
  cin>>mes;

  cout<<"ingresar año....:";
  cin>>a;

  if (dia<1||dia>31||mes<1||mes>12||a<0){
     dia = 0;
     mes = 0;
     a = 0;
  }


  if (dia==0||mes==0||a==0){
   cout<<"la fecha es incorrecta"<<"\n";

}
   cout<<"la fecha es....:"<<dia<<"/"<<mes<<"/"<<a<<"\n";

system("PAUSE");


}
