#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float a,b,c,delta,x1,x2;
    char r;
    do{
        cout << "\nDigite o valor de a ";
        cin >> a;
        cout <<  "\nDigite o valor de b ";
        cin >> b;
        cout << "\nDigite o valor de c ";
        cin >> c;
        delta=pow(b,2)-4*a*c;
        cout << "\nO valor de Delta e " << delta;
        if(delta<0)
            cout << "\nNao existe raizes reais ";
        else 
            if(delta==0){
                x1=(-b+sqrt(delta))/(2*a);
                cout << "Existem apenas uma raiz real que e " << x1;
            }
            else{
                x1=(-b+sqrt(delta))/(2*a);
                x2=(-b+sqrt(delta))/(2*a);
                cout << "\nExistem duas raizes reais que sao " << x1 << " e " << x2;
            }
     cout << "\nDeseja realizar um novo calculo?(s/n) ";  
     cin >> r;      
    }while(r=='s' or r=='S');
    return 0;
}