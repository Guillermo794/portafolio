#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <locale.h>

using namespace std;

int main(){

setlocale(LC_CTYPE,"spanish");

int a[10],z,i;

for(i=0;i<10;i++)
{
    cout<<"ingresa el valor del elemnto a: ["<<i<<"]"<<endl;
    cin>>a[i];

}
cout<<"los arreglos son y el histograma son: "<<endl;
for(i=0;i<10;i++)
{
cout<<a[i]<<"\t";
for(z=1;z<=a[i];z++)
{
    cout<<"*";
}
cout<<"\n";
}
system("PAUSE");
return 0;
}
