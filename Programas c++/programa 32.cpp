#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <locale.h>

using namespace std;

struct amigos
{
    char nombre[80];
    int edad;
    char numcel[11];
    char domi[80];
};


int main(){

setlocale(LC_CTYPE,"spanish");

struct amigos registro[3];
int i;
for(i=0;i<3;i++)
{
    fflush(stdin);
    cout<<"ingresa tu nombre completo amigo:"<<i+1<<endl;
    cin.getline(registro[i].nombre ,80);

    cout<<"ingresa tu celular amigo:"<<i+1<<endl;
    cin.getline(registro[i].numcel ,11);

    cout<<"ingresa tu domicilio amigo:"<<i+1<<endl;
    cin.getline(registro[i].domi ,80);

    cout<<"ingresa tu edad:"<<i+1<<endl;
    cin>>registro[i].edad;



}
cout<<"tu registro de amigos es :"<<i+1<<endl;
for(i=0;i<3;i++)
{
    system("CLS");
    cout<<"Amigo: "<<i+1<<endl;
    cout<<"Nombre: "<<registro[i].nombre<<endl;
    cout<<"Edad: "<<registro[i].edad<<endl;
    cout<<"Numero Celular: "<<registro[i].numcel<<endl;
    cout<<"Domicilio: "<<registro[i].domi<<endl;
    system("PAUSE");
}
system("PAUSE");
return 0;


}
