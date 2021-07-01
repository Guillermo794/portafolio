#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <locale.h>

using namespace std;

int main(){

setlocale(LC_CTYPE,"spanish");

char a[80],b[30]="DE LA UVM";
cout<<"ingresa tu nombre completo"<<endl;
cin.getline(a,80);
cout<<"HOLA "<<a<<" BIENVENIDO AL SISTEMA "<<b<<endl;
system("PAUSE");


}
