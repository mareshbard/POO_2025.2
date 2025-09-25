#include <iostream>

using namespace std;

int main(){
    //lembrar de deixar como float
    int num1, num2;
    float mediaHarmonica;
    cout << "Digite dois numeros: " << endl;
    cin >> num1 >> num2;
    mediaHarmonica = 2.0/((1.0/num1) + (1.0/num2));
    cout << mediaHarmonica << endl;
    
    return 0;
}
