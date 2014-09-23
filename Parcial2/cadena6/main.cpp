#include <iostream>
#include <string>
#include <string.h>

using namespace std;
string cadena,insertado;

int main()
{
    cout<<"Ingresar la cadena..:";
    cin>>cadena;
    insertado=cadena.insert(1, "Juan");
    cout<<"valor de insertado"<<insertado<<"\n";
    string ree;
    ree="BBBBB";
    ree= ree.replace (1,3, "Rommel");
    cout<<"Valor ree "<<ree<<"\n";
    return 0;
}
