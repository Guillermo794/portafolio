#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <locale.h>
#include <string.h>

using namespace std;

int main(){

setlocale(LC_CTYPE,"spanish");

char pass[8],a[25],b[25],c[40],d[20];
int x,i,j,g;
float cal,prom=0,cali=0;

do{
cout<<"Ingresa tu contraseña: "<<endl<<endl;
cin.getline(pass,8);
x=strcmp(pass,"1a2b3c");

if(x==0)
{
    cout<<"tu contraseña es correcta "<<endl<<endl;

}
else{

cout<<"tu contraseña es incorrecta intentalo de nuevo"<<endl<<endl;
}
}
while(x!=0);

cout<<"Bienvenido "<<endl<<endl;

for(i=0;i<=4;i++){

cout<<"para el alumno "<<i+1<<endl;
fflush(stdin);
cout<<endl<<"ingresa tu apellido paterno alumno: "<<i+1<<endl;
cin.getline(a,25);
cout<<"ingresa tu apellido materno alumno: "<<i+1<<endl;
cin.getline(b,25);
cout<<"ingresa tus nombres alumno: "<<i+1<<endl;
cin.getline(c,40);
cout<<"ingresa tu numero de cuenta alumno: "<<i+1<<endl;
cin.getline(d,20);

for(j=0;j<=4;j++){
cout<<"ingresa tu calificacion: "<<j+1<<" alumno: "<<i+1<<endl;
cin>>cal;
cali=cali+cal;
prom=cali/5;

}

cout<<"--------------------------------------------"<<endl;
cout<<"--------------------------------------------"<<endl;
cout<<endl<<"Hola Alumno: "<<c<<" "<<a<<" "<<b<<" "<<endl<<endl;
cout<<"TU NUMERO DE CUENTA ES: "<<d<<endl<<endl;
if(prom>=7){
cout<<"TU PROMEDIO ES APROBATORIO "<<prom<<endl<<endl;
cout<<"--------------------------------------------"<<endl;
}else
cout<<"TU PROMEDIO NO ES APROBATORIO "<<prom<<endl<<endl;
cout<<"--------------------------------------------"<<endl;


cali =0;
}



system("PAUSE");
return (0);
}





