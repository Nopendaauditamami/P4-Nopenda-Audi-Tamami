#include <iostream>
using namespace std ;

int main (){
int myArray[7] = {1,2,3,4,5,6,7} ;
char Nama[30],NIM[20],Kelompok[20] ;

cout << "NAMA : " ;
gets(Nama) ;
cout << "NIM : "  ;
cin >> NIM ;
cout << "Kelompok : " ;
cin >> Kelompok ;
cout << endl ;

cout << "Data ke 1 = " <<myArray [0]<<endl ;
cout << "Data ke 2 = " <<myArray [1]<<endl ;
cout << "Data ke 3 = " <<myArray [2]<<endl ;
cout << "Data ke 4 = " <<myArray [3]<<endl ;
cout << "Data ke 5 = " <<myArray [4]<<endl ;
cout << "Data ke 6 = " <<myArray [5]<<endl ;
cout << "Data ke 7 = " <<myArray [6]<<endl ;
}
