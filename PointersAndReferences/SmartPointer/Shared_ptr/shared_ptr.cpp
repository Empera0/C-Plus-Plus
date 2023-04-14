#include <iostream>
#include <memory>

class HeavyObject {
public:
    HeavyObject() { std::cout << "HeavyObject created\n"; }
    ~HeavyObject() { std::cout << "HeavyObject destroyed\n"; }
};

int main() {
    //HeavyObject* obj = new HeavyObject();
    std::shared_ptr<HeavyObject> obj = std::make_shared<HeavyObject>(); 
    // ...
    return 0;
}