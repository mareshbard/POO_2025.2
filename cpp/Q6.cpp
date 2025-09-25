#include <iostream>
#include <cmath>

using namespace std;

int main(){
    //lembrar de deixar como float
    int lado1, lado2;
    float hip;
    cout << "Digite o tamanho de dois lados: " << endl;
    cin >> lado1 >> lado2;
    lado1 = pow(lado1, 2);
    lado2 = pow(lado2, 2);
    hip = pow(lado1+lado2, 1.0/2.0);
    cout << "A hipotenusa eh: "<< hip << endl;
    
    return 0;
}
