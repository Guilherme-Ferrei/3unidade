#include<iostream>
using namespace std;
int main(){
    int A[10]; // matriz linha para armaz. 10 int
    for(int x=0;x<10;x=x+1){
        cout << "\nDigite qualquer numero inteiro";
        cin >> A[x];
    }
    for(int x=0;x<10;x=x+1)
    cout << A[x] << " ";
    return 0;
}