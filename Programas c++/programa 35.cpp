#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <locale.h>
#include <string.h>
#include <math.h>

using namespace std;
float media(float y,float x);
float cubo(float r);
void saludo();



int main(){

float x,y,p,m;

saludo();
    cout<<"ingresa x"<<endl;
    cin>>x;
    cout<<"ingresa y "<<endl;
    cin>>y;

    m=media(x,y);
    p=cubo(x);

    cout<<"media de tus valores es: "<<m<<endl;
    cout<< "cubo de x: "<<x<<" es :"<<p<<endl;
    system("PAUSE");
return 0;

}
float media(float x, float y)
{

    float c=(x+y)/2;
    return c;

}

float cubo(float r)
{

float d=pow(r,3);
return d;

}


void saludo()
{
cout<<"hola blienvenido al sistema"<<endl;
}
