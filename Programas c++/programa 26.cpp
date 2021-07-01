#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <locale.h>

using namespace std;

int main(){

setlocale(LC_CTYPE,"spanish");

char a[40],b[25],c[25];
cout<<"ingresa tu apellido paterno "<<endl;
cin.getline(a,40);
cout<<"ingresa tu apellido materno "<<endl;
cin.getline(b,25);
cout<<"ingresa tus nombres "<<endl;
cin.getline(c,25);
cout<<"TU ERES: "<<a<<" "<<b<<" "<<c<<" ENCANTADO DE CONOCERTE "<<endl;
system("PAUSE");


}
