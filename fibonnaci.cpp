#include <iostream>
#include <stdlib.h>

using namespace std;

int main (){

unsigned long guardar[100];

for (int i = 1; i < 11; i++)
{
    if(i == 1 || i == 2)
    {
        cout<<"1"<<endl;
        guardar[i-1]=1;
    }
    else{

        cout<<(guardar[i-3]+guardar[i-2])<<endl;
        guardar[i-1] = guardar[i-3]+guardar[i-2];
    }
}




    cin.ignore();
    cout<<"Presione cualquier tecla para continuar..."<<endl;
    cin.get();
    return 0;
}