#include <iostream>
#include <stdlib.h>
#include <time.h>


using namespace std;

int main()
{
  int num;
  int conta=0;

  srand(time(0));
  cout<<"numeroa aleatorios"<<"\n";

  while(conta<10){



  num = 1 + rand()%(101-1);

  cout<<num<<"\n";

    conta++;

  }

}
