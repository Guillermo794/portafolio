#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <locale.h>
#include <string.h>

using namespace std;

struct empleados
{
    char nombre[80];
    float sueldo;
    char departamento[20];

};


int main(){

setlocale(LC_CTYPE,"spanish");

struct empleados registro[6];
int i,x;
for(i=0;i<6;i++)
{
    fflush(stdin);
    cout<<"ingresanombre completo del empleado:"<<i+1<<endl;
    cin.getline(registro[i].nombre ,80);

    cout<<"ingresa el departamento del empleado (recursos humanos, contabilidad y sistemas):"<<i+1<<endl;
    cin.getline(registro[i].departamento,20);

    cout<<"ingresa Sueldo empoleado :"<<i+1<<endl;
    cin>>registro[i].sueldo;


}

cout<<"tu registro de empleados es :"<<i+1<<endl;
for(i=0;i<6;i++)
{
    x=strcmp(registro[i].departamento,"sistemas");
    if(x==0){

            cout<<"Empleado"<<i+1<<endl;
            cout<<"nombre"<<registro[i].nombre<<endl;
            cout<<"departamento"<<registro[i].departamento<<endl;
            cout<<"sueldo"<<registro[i].sueldo<<endl;
            system("PAUSE");
    }
}
system("PAUSE");
return 0;


}
