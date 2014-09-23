#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int numero=0;
    int numerofinal[6];
    int max[6];
    int pos=0;
    for (int i = 100; i < 1000; i++)
    {
      for (int j=100 ; j<1000; j++)
        {
         numero=i*j;

         for(int z=0;z<6;z++){
          numerofinal[z]=(numero%10);
          numero=numero/10;

          }
        if(numerofinal[0]==numerofinal[5]&&
           numerofinal[1]==numerofinal[4]&&
           numerofinal[2]==numerofinal[3]
           ){
             for(int h=0;h<6;h++)
             max[h]=numerofinal[h];
              for(int w=0;w<6;w++)
                 cout<<max[w];
            cout<<"\t"<<i<<"\t"<<j<<endl;;
             }

            }
        }




return 0;

}

