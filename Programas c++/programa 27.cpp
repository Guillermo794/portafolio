#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <locale.h>
#include <string.h>

using namespace std;

int main(){

setlocale(LC_CTYPE,"spanish");

char a[50],b[50];
cout<<"Ingresa tu frase de 50 cadenas "<<endl<<endl;
cin.getline(a,50);
cout<<endl<<"tu frase es: "<<a<<endl<<endl;
strupr(a);
cout<<"tu frase en mayusculas es: "<<strupr(a)<<endl<<endl;
strcpy(b,a);
strrev(b);
cout<<"tu frase en cadena 1 en cadena 2: "<<strcpy(b,a)<<endl<<endl;
cout<<"tu frase en cadena 1: "<<a<<endl<<endl;
cout<<"tu frase en cadena 2: "<<strrev(b)<<endl<<endl;



system("PAUSE");


}
