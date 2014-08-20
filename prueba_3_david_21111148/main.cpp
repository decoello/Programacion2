#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int main()
{
   int turno,x,y;
   double tolp,ventas,ihss,comis,salario,msalario,psalario,sumsal,tcomis;
   char nombre[30],resp;

   msalario = 0.00;
   ihss = 0.00;
   comis = 0.00;
   psalario = 0.00;
   sumsal = 0.00;
   tolp = 0.00;
   x=0;
   y==0;
   tcomis= 0.00;
   ventas = 0.00;


   do{

     y++;

    cout<<"ingresar nombre del empleado.....";
    cin.getline(nombre,30);

    _flushall();

    cout<<"ingresar turno.....";
    cin>>turno;

    _flushall();

    if((turno==1)or(turno==2)or(turno==3)){

       turno=turno;
    }else{

       cout<<"el turno ingresado es incorrecto\n";
       break;

    }


    for(x=0;x<6;x++){

     cout<<"ingresar ventas";
     cin>>ventas;



      switch(turno){

    case 1:
       comis = ventas * 0.05;
        break;
    case 2:
        comis = ventas * 0.07;
        break;
    case 3:
        comis = ventas * 0.08;
    }
      cout<<"comision...:"<<comis<<"\n";
      tcomis+=comis;

    }


      salario = tcomis;

    if (salario>=7500){

        ihss = 250;
    }else{

        ihss = salario * 0.03;
    }

    tolp = salario - ihss;

    cout<<"total a pagar ....:"<<tolp<<"\n";

   cout<<"desea continuar...?";
   cin>>resp;


    _flushall();

   }while(resp=='S');

   if (msalario>salario){
    msalario = salario;
   }

   sumsal+=salario;

   psalario = sumsal / y;





   cout<<"mejor salario....:"<<msalario<<"\n";

   cout<<"suma total de salrio salario....:"<<sumsal<<"\n";

   cout<<"promedio de los salarios....:"<<psalario<<"\n";



}




