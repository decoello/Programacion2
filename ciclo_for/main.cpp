#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
    srand(time(0));

    int num;
    int cont;

    for(cont=0;cont<10;cont++){

        num = 1 + rand()%(101-1);

        cout<<num<<"=====>"<<num<<"\n";
    }

}
