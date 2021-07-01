/* llenar un arreglo de tipo flotante de 6 elementos y obtener el promedio de este y mostrar el arreglo ingresado y el promedio de este*/

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <locale.h>

using namespace std;

int main(){

setlocale(LC_CTYPE,"spanish");


float x[6],suma=0,prom;
int i;
for(i=0; i<6; i++)
{
cout<<"ingresa el valor del tu calificacion: ["<<i<<"]"<<endl;
cin>>x[i];
suma=suma+x[i];

}
cout<<"el arreglo que ingresaste de tus numeros es :"<<endl;

//impresion del arreglo
for(i=0;i<6;i++)
{
    cout<<x[i]<<endl;
}
    prom=suma/6;

    cout<<"Tu promedio es: "<<prom<<endl;
system("PAUSE");
return 0;
}
