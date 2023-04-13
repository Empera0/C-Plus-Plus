#include <iostream>

using namespace std;

int main(){
    int num1 = 5;
    int& num2 = num1;

    cout << "num1 value is " << num1 << endl;
    cout << "num2 reference value is " << num2 << endl;
}