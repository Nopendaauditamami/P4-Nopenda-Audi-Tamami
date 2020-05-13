#include <iostream>
using namespace std;

main (){
int NIM [3][4][5];
int i, j,k;
for (i = 0; i< 3; i++){
for (j = 0; j <4; j++){
for (k= 0 ; k <5 ; k++)
{
cout<< "NIM [" <<i<<"][" << j << "][" << k <<"]= " ;
cin >> NIM[i][j][k];
}
cout<<endl;
}
}
}
