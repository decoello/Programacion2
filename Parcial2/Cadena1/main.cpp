#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

using namespace std;
char cadena[30];

void presentar1(char cadena[])
{   int i,k;
    for (i=0;i<strlen(cadena);i++)
    {
        for(k=0;k<=i;k++)
        {
            cout<<cadena[k];
        }
        cout<<"\n";
    }
}
void presentar2(char cadena[])
{
    int i,k;
    for(i=strlen(cadena);i>=0;i--)
    {
        for(k=0;k<=i;k++)
        {
            cout<<cadena[k];
        }
        cout<<"\n";
    }

}

int main()
{
    cout<<"Ingresar Cadena de Texto..:";
    cin.getline(cadena,30);
    presentar1(cadena);
    presentar2(cadena);


}
