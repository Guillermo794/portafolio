#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <locale.h>

using namespace std;

int main(){

setlocale(LC_CTYPE,"spanish");

int i,j;
float m[3][5];
for(i=0;i<3;i++){

    for(j=0;j<5;j++){

        cout<<"ingresa el valor del elemento m ["<<i<<"]["<<j<<"]"<<endl;
        cin>>m[i][j];
    }
}


cout<<"la matriz que ingresaste es"<<endl;

for(i=0;i<3;i++){

    for(j=0;j<5;j++){

cout<<m[i][j]<<"\t";
    }
cout<<endl;
}
system("PAUSE");
return 0;

}
