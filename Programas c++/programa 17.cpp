#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <locale.h>

using namespace std;

int main(){

setlocale(LC_CTYPE,"spanish");

int x[5],y[5],z[5],i;

for(i=0;i<5;i++)
{
    cout<<"ingresa el valor del elemnto x: ["<<i<<"]"<<endl;
    cin>>x[i];

    cout<<"ingresa el valor del elemnto y: ["<<i<<"]"<<endl;
    cin>>y[i];

    z[i]=x[i]+y[i];
}
cout<<"los arreglos son: "<<endl;
for(i=0;i<5;i++){
cout<<x[i]<<"\t"<<y[i]<<"\t"<<z[i]<<endl;


}
system("PAUSE");
return 0;
}
