#include <iostream>
using namespace std;
int main(){
    int num1, num2, num3;
    cout <<"Digite 3 numeros: " << endl;
    cin >> num1 >> num2 >> num3;
    if(num1>num2&&num1>num3){
        cout << "O " << num1 << " é o maior"<<endl;
    }
    else if(num2>num3){
        cout << "O " << num2 << " é o maior"<<endl;
    }
    else{
        cout << "O " << num3 << " é o maior"<<endl;
    }
    if(num1<num2&&num1<num3){
        cout << "O " << num1 << " é o menor"<<endl;
    }
    else if(num2<num3){
        cout << "O " << num2 << " é o menor"<<endl;
    }
    else{
        cout << "O " << num3 << " é o menor"<<endl;
    }

    return 0;
}
