#include<iostream>
using namespace std;
int main(){
    int A[10];
    for(int x=0;x<10;x=x+1){
        cout << "\nDigite o " << x+1 << "° Numero";
        cin >> A[x];
    }
    for(int x=0;x<10;x=x+1)
    cout << A[x]*2 << " ";
    return 0;
}