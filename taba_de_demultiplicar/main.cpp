#include <iostream>

using namespace std;

int main()
{
  int tabla,resp,i;

  cout<<"ingresar tabla a multiprilcar....:";
  cin>>tabla;

  for(i=0;i<10;i++){

    resp= i * tabla;

    cout<<i<<"x"<<tabla<<"="<<resp<<"\n";

  }

}
