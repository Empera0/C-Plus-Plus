#include <iostream>
#include <memory>

 
using namespace std;

int main()
{
    //Gettin area in the memory
    unique_ptr<int> Obj1 (new int(65)); 
    //used in the code
    cout << "Obj1: " << *Obj1 << '\n';
    //set empty
    Obj1.reset();
    return 0;

    

}