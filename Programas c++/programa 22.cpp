/* ingresar los gastos de n dias que hiso una persona el programa debera hacer
 cuanto es el total de gastos y en que dia se hizo el mayor gasto y que cantidad fue. utilizar arreglso*/

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <locale.h>

using namespace std;

int main(){

setlocale(LC_CTYPE,"spanish");

int i,n,dia;

float gastos[35],tg=0,mayor=0;

cout<<"ingrese sus dias: "<<endl;
cin>>n;

for(i=0;i<n;i++)
{
    cout<<"ingresa los gastos de su dia: ["<<i+1<<"]"<<endl;

    cin>>gastos[i];

    tg=tg+gastos[i];


if(mayor<=gastos[i]){

mayor=gastos[i];

dia=i;
}

}
cout<<endl<<"la suma de tus gastos en "<<n<<" dias, es de "<<tg<<" pesos \nel dia que mas se gasto fue el dia "<<dia+1<<" \ny la cantidad fue de "<<mayor<<" pesos"<<endl;

system("PAUSE");
return 0;
}
