#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <locale.h>
#include <string.h>

using namespace std;

struct persona
{
    char nombre[80];
    int edad;
    char sexo[2];

};


int main(){

setlocale(LC_CTYPE,"spanish");

struct persona registro[6];
int i,x;
for(i=0;i<6;i++)
{
    fflush(stdin);
    cout<<"ingresa nombre completo:"<<i+1<<endl;
    cin.getline(registro[i].nombre ,80);

    cout<<"ingresa sexo F/M):"<<i+1<<endl;
    cin.getline(registro[i].sexo,2);

    cout<<"ingresa edad :"<<i+1<<endl;
    cin>>registro[i].edad;


}

for(i=0;i<6;i++)
{
    x=strcmp(registro[i].sexo,"F");
    if(x==0){

        if(registro[i].edad > 20 && registro[i].edad < 30)
           {
               cout<<endl;
            cout<<"Persona: "<<i+1<<endl;
            cout<<"Nombre: "<<registro[i].nombre<<endl;
            cout<<"Sexo: "<<registro[i].sexo<<endl;
            cout<<"Edad: "<<registro[i].edad<<endl;
            system("PAUSE");
            }
    }
}

for(i=0;i<6;i++)
{
    x=strcmp(registro[i].sexo,"M");
    if(x==0){

        if(registro[i].edad < 37)
           {
            cout<<endl;
            cout<<"Persona: "<<i+1<<endl;
            cout<<"Nombre: "<<registro[i].nombre<<endl;
            cout<<"Sexo: "<<registro[i].sexo<<endl;
            cout<<"Edad: "<<registro[i].edad<<endl;
            system("PAUSE");
            }
    }
}

system("PAUSE");
return 0;


}
