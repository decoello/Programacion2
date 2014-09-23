#include <iostream>

using namespace std;

int main()
{
    int i,k;

    for(i=1;i<5;i++){

        for(k=1;k<=i;k++){
            cout<<k;
        }
        cout<<"\n";
    }


    for(i=5;i>=1;i--){

        for(k=1;k<=i;k++){
            cout<<k;
        }
        cout<<"\n";
    }
}
