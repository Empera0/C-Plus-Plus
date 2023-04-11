#include <iostream>

using namespace std;

int main(){
    int num1 = 100;

    auto add = [num1](int a, int b) -> double{
        return  num1+a+b;
    };

    cout << add(50 , 15) << endl; 

}