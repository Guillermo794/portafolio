#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <locale.h>

using namespace std;

struct cd
{
    char titulo[50];
    char artista[30];
    int numcan;
    float precio;
};


int main(){

setlocale(LC_CTYPE,"spanish");

struct cd coleccion[5];
int i;
for(i=0;i<5;i++)
{
    fflush(stdin);
    cout<<"ingresa el titulo del disco"<<i+1<<endl;
    cin.getline(coleccion[i].titulo,50);
    cout<<"ingresa el artista del disco"<<i+1<<endl;
    cin.getline(coleccion[i].artista,30);
    cout<<"ingresa el numero de canciones que tiene el disco"<<i+1<<endl;
    cin>>coleccion[i].numcan;
    cout<<"ingresa el precio del disco"<<i+1<<endl;
    cin>>coleccion[i].precio;
}
cout<<"la coleccion completa es"<<i+1<<endl;
for(i=0;i<5;i++)
{
    system("CLS");
    cout<<"Disco"<<i+1<<endl;
    cout<<"Titulo: "<<coleccion[i].titulo<<endl;
    cout<<"Artista: "<<coleccion[i].artista<<endl;
    cout<<"numero de canciones: "<<coleccion[i].numcan<<endl;
    cout<<"precio: "<<coleccion[i].precio<<endl;
    system("PAUSE");
}
system("PAUSE");
return 0;
}
