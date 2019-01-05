#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
 float x;
 cout << " \t|============================================|" << endl ;
cout << " \t|====== PROGRAM KONVERSI NILAI KEHURUF ======|" << endl ;
cout << " \t|============================================|" << endl ;
cout << " \t|============================================|\n" << endl ;

cout<<"masukkan nilai :";
cin>>x;
if(x>=80 && x==100)
            cout<<" \t= A";
else
if(x>=65 && x<=79)
            cout<<"\t=B";
else
if(x>=55 && x<=64)
           cout<<"\t= C";
else
if(x>=40 && x<=54)
        cout<<"\t= D";
else
if(x>=39 && x<=1)
        cout<<"\t= E";

 return 0;
}
