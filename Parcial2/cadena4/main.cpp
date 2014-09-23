#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

using namespace std;
const int t=3;
char nombre[3][30];
void ingresoCadenas(char nombre[t][30])
{
    for(int i=0; i<=t; i++)
    {
        cout<<"Ingresar el nombre...:";
        cin.getline(nombre[i],30);
    }
}
void Comparar2(char nombre[t][30])
{
    char cadcompa[30];
    cout<<"Ingresar cadena a comparar:";
    cin.getline(cadcompa,30);
    for(int i=0;i<=t;i++)
    {
        if (strcmp(nombre[i],cadcompa)==0)
        {
            cout<<"Comparacion correcta con "<<nombre[i]<<"\n";
        }
    }
}

int main()
{
   ingresoCadenas(nombre);
   Comparar2(nombre);
   cout<<"\n"<<"Otro tipo de comparacion"<<"\n";
   //comparar(nombre);

   return 0;

}
