#include <iostream>
#include <stdlib.h>


using namespace std;

int main()
{
    int num1,num2,mayor;

    cout<<"ingresar primer numero....:";
    cin>>num1;

    cout<<"ingresar segundo numero....:";
    cin>>num2;

    if (num1>num2)
    {
        mayor = num1;
    }
     else {
        mayor = num2;
     }

    cout<<"el numero mayor es....:"<<mayor<<"\n";

    system("PAUSE");
}
