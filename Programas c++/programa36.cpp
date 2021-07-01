#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <locale.h>
#include <string.h>
#include <math.h>
#include "F:\GEPA\progra estruc\funcionesguillermo.h"
using namespace std;

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
