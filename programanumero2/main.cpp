#include <iostream>

using namespace std;
/*
ingress trabajadas y el pago por hora del empleado para luego determinar su pago de horA;
la deuccion del rap que es de 1.5 del ingreso, presentar tota a pagar
*/
int main()
{
  int horas,pxh,phoras,rap,totalp;

cout<<" ingresar as horas trabajadas.....:";
cin>>horas;

cout<<" ingresar el pago por horas.....:";
cin>>pxh;

 phoras = pxh * horas;

 rap = phoras * 0.015;

 totalp = phoras - rap;

cout<<" pago por horas...:"<<phoras<<"\n";
cout<<" deduccion por rap...:"<<rap<<"\n";
cout<<" total a pagar...:"<<totalp<<"\n";

}
