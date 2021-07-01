#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <locale.h>
#include <string.h>

using namespace std;

int main(){

setlocale(LC_CTYPE,"spanish");

char a[40],b[20],c[20];
int x;
cout<<"Ingresa tu frase 1: "<<endl<<endl;
cin.getline(a,20);
cout<<endl<<"ingresa tu frase 2 : "<<endl<<endl;
cin.getline(b,20);
strcat(a,b);
cout<<"tu frase concatenada es: "<<a<<endl<<endl;
strupr(a);
strrev(b);
cout<<"tu frase 1 en mayusculas es: "<<a<<endl<<endl;
cout<<"tu frase 2 al reves es es: "<<b<<endl<<endl;

cout<<"Ingresa tu frase 3: "<<endl<<endl;
cin.getline(c,20);

x=strcmp(b,c);

cout<<"tu comparacion de frases es : "<<x<<endl<<endl;

system("PAUSE");


}
