#include<iostream>
using namespace std;
int main(){
    float A[10],B[10];
    for(int x=0;x<10;x=x+1){
        cout << "\nDigite o " << x+1 << "° Numero ";
        cin >> A[x];
        B[x]= (A[x]+2)/4;
    }
    cout << "\n Conteudo do Array A \n";
    for(int x=0;x<10;x=x+1)
        cout << A[x] << " ";
        cout << "\n\n";
        cout << "\n Conteudo do Array B \n";
    for(int x=0;x<10;x=x+1)
        cout << B[x] << " ";    
    return 0;
}