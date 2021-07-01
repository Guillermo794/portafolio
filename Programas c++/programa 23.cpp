/*ingresar 6 nunmeros decimales en un areglo y obtener su promedio, en otro arreglo ingresar los valores que son mayores al promedio y en la salida mostrar el arreglo original, el promedio de
arreglo original y el arreglo con los numeros mayores del promedio  */

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <locale.h>

using namespace std;

int main(){

setlocale(LC_CTYPE,"spanish");


float a[6],m[6],suma=0,prom;
int i=0,x=0;

//guardar arreglo original
for(i=0; i<6; i++)
{
cout<<"ingresa el valor de tu arreglo: ["<<i<<"]"<<endl;
cin>>a[i];
suma=suma+a[i];

}

 prom=suma/6;

//for para guardad numeros mayores al promedio

for(i=0;i<6;i++)
{
      if(a[i]>prom){

      m[x]=a[i];
      x++;

}

}
cout<<endl<<"el arreglo original es: "<<endl;

//impresion del arreglo
for(i=0;i<6;i++)
{
    cout<<a[i]<<endl;
}

cout<<endl<<"Tu promedio del arreglo es: "<<prom<<endl<<endl;

cout<<"el arreglo con los numeros mayores que el promedio es: "<<endl;

//impresion del arreglo para mayores que el promedio
for(i=0;i<x;i++)
{
    cout<<m[i]<<endl;
}


system("PAUSE");
return 0;
}
