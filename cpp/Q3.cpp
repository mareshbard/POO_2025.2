#include <iostream>
#include <cmath>

using namespace std;

int main(){
    //lembrar de deixar como float
    int num1, num2;
    float mediaGeo;
    cout << "Digite dois numeros: " << endl;
    cin >> num1 >> num2;
    mediaGeo = pow(num1*num2, (1.0/2.0));
    cout << "A media geometrica dos dois numeros eh: "<< mediaGeo << endl;
    
    return 0;
}
