#include <iostream>

using namespace std;
/*
ingresarnel nombre del alumno, la nota acumulada y examen.
calcular la notaa final y ajustarla a 60 si esta entre 57-59.
determinar la observacion con la siguiente tabla

1-59 reprobado
60-80 bueno
81-90 muy bueno
91-100 sobresaliente

*/
int main()
{
   char nombre[30];
   int na,ne,nf;

   cout<<" ingresar nombre del alumno.....:";
   cin.getline(nombre,30);

   cout<<"ingresar nota acumulada......:";
   cin>>na;

   cout<<"ingresar nota examen......:";
   cin>>ne;

   nf = na + ne;

   if((nf>=57)&&(nf<=60)){
       nf = 60;

       cout<<"nota final...:"<<nf<<"\n";
   }


   if ((nf>=1)&&(nf<60)){
    cout<<"reprovado";
   }
   else if((nf>=60)&&(nf<=80)){
      cout<<"bueno";
   }
   else if((nf>=81)&&(nf<=90)){
        cout<<"muy bueno";
   }
   else if((nf>=91)&&(nf<=100)){
          cout<<"sobresaliente";
   }
   else{
            cout<<"nota fuera del rango";
   }


}

