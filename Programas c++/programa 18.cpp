#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <locale.h>

using namespace std;

int main(){

setlocale(LC_CTYPE,"spanish");


float x[7];
int i;
for(i=0; i<7; i++)
{
    cout<<"ingresa el valor del elemnto x: ["<<i<<"]"<<endl;
    cin>>x[i];

}
cout<<"el arreglo que ingresaste es :"<<endl;
//impresion del arreglo
for(i=0;i<7;i++)
{

    //cout<<x[i]<<t";

    cout<<x[i]<<endl;
}
system("PAUSE");
return 0;
}
