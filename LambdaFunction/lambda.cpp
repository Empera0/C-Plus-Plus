#include <iostream>

using namespace std;

    /*
    Lambda function in C++ is more powerful than the ordinary function. Ordinary functions can only use
    global variables or the variables passed to the function. Whereas lambda expressions can use local
    variables present in the main method as well as parameters passed to the lambda expression along
    with global variables
    */

int main(){
    int num1 = 100;

    auto add = [num1](int a, int b) -> double{
        return  num1+a+b;
    };

    cout << add(50 , 15) << endl; 

}