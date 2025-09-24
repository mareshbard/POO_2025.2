#include <iostream>
using namespace std;
int main(){

    int num1, num2;
    cout << "Digite dois numeros para checar qual o maior: "<<endl;
    cin >> num1 >> num2;
    if (num1> num2) {
        cout << "O primeiro numero, " << num1 << " eh maior que o segundo" <<endl;
    }
    else if(num1==num2){
        cout << "Os dois numeros sao iguais"<<endl;
    }
    else {
        cout << "O segundo numero, " << num2 << " eh maior que o primeiro" << endl;
    }
    
    return 0;
}
