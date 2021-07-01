/*crear un programa que pida 10 numeros y que al imprimirlo lo muestre en orden inverso*/

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <locale.h>

using namespace std;

int main(){

setlocale(LC_CTYPE,"spanish");


int x[10];
int i;
for(i=0; i<10; i++)
{
    cout<<"ingresa el valor del elemnto x: ["<<i<<"]"<<endl;
    cin>>x[i];

}
cout<<"el arreglo que ingresaste es :"<<endl;
//impresion del arreglo
for(i=9;i>=0;i--)
{

    //cout<<x[i]<<t";

    cout<<x[i]<<endl;
}
system("PAUSE");
return 0;
}

