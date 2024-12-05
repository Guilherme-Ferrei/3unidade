#include<iostream>
using namespace std;
int main(){
    int A[10];
    int c;
    for(int x=0;x<10;x=x+1){
        cout << "\nDigite o " << x+1 << "° Numero";
        cin >> A[x];
    }
    cout << "\nDigite um numero qualquer";
    cin >> c;
    for(int x=0;x<10;x=x+1)
      if (A[x]==c)
    cout << "\nAchei";
    else 
    return 0;

}