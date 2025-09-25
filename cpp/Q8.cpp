#include <iostream>
#include <cmath>

using namespace std;

int main(){
    //lembrar de deixar como float
    int a, b, c;
    float equacao;
    float delta;
    cout << "Digite o tamanho de dois lados: " << endl;
    cin >> a >> b >> c;
    delta = ((pow(b,2))-4*a*c);
    
    if(delta>0){
    equacao = (-b + pow(delta, 1.0/2.0)) /(2*a);
    cout << "A raiz 1 eh: "<< equacao << endl;
    equacao = (-b - pow(delta, 1.0/2.0)) /(2*a);
    cout << "A raiz 2 eh: "<< equacao << endl;
    }
    else if(delta<0){
        cout << "Não há raizes" <<endl;
    }
    else{
    equacao = (-b + pow(delta, 1.0/2.0)) /(2*a);
    cout << "A raiz 1 eh: "<< equacao << endl;  
    }

    return 0;
}
