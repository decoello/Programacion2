#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

using namespace std;
/*
Elaborar un programa donde se ingrese una cadena de texto y luego usando un procediiento se sustituyen las
vocales por x
*/
char cadena[30];
void cambiarVocales(char cadena[])
{
    int i;
    for(i=0;i<strlen(cadena);i++)
    {
       switch (cadena[i])
       {
    case 'a':
    case 'A':
    case 'e':
    case 'E':
    case 'i':
    case 'I':
    case 'o':
    case 'O':
    case 'u':
    case 'U':
        cadena[i]='X';
        break;
    default:
        break;
       }
    }
}
int main()
{
   cout<<"Ingresar Cadena de Texto..:";
   cin.getline(cadena,30);
   cambiarVocales(cadena);
   cout<<"\n"<<cadena<<"\n";
}
