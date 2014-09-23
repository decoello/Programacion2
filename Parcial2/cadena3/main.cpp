#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
//comparacion de cadenas
using namespace std;
const int t=0;
char nombre[0][30];
int num[t];

void ingresoCadenas(char nombre[t][30])
{
    for(int i=0; i<=t; i++)
    {
        cout<<"Ingresar el nombre...:";
        cin.getline(nombre[i],30);
    }
}

int contar (char nombre[])
{
    int c=1;
    for(int k=0;k<strlen(nombre);k++)
    {
        switch(nombre[k])
        {
        case ' ':
            c++;
            break;
        default:
            break;
        }
    }
    return c;
}
void contarPalabras(char nombre[t][30])
{
    int conta=0;
    for(int i=0;i<=t;i++)
    {
        conta=contar(nombre[i]);
        cout<<nombre[i]<<" Tiene "<<conta<<" palabras "<<"\n";
    }
}

int main()
{
    ingresoCadenas(nombre);
    contarPalabras(nombre);
}
