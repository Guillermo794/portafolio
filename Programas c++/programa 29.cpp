#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <locale.h>
#include <string.h>

using namespace std;

int main(){

setlocale(LC_CTYPE,"spanish");

char pass[8];
int x;

do{
cout<<"Ingresa tu contraseña: "<<endl<<endl;
cin.getline(pass,8);
x=strcmp(pass,"1a2b3c");

if(x==0)
{
    cout<<"tu contraseña es correcta "<<endl;

}
else{

cout<<"tu contraseña es incorrecta intentalo de nuevo"<<endl<<endl;
}
}
while(x!=0);

cout<<"Bienvenido "<<endl;

system("PAUSE");
}







