#include <iostream>
#include <string>
using namespace std;

      void myFunction(int i) {
        cout << "Printing int: " << i << endl;
      }
      void myFunction(double  f) {
        cout << "Printing float: " << f << endl;
      }
      void myFunction(string a) {
        cout << "Printing character: " << a << endl;
      }

int main(){
    myFunction(5);
    myFunction(62.123);
    myFunction("Hello c++");
}