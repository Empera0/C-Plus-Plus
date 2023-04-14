#include <iostream>
#include <memory>

class HeavyObject {
public:
    HeavyObject() { std::cout << "HeavyObject created\n"; }
    ~HeavyObject() { std::cout << "HeavyObject destroyed\n"; }
};

int main() {
    std::weak_ptr<HeavyObject> weak_ptr;
    {
        std::shared_ptr<HeavyObject> obj = std::make_shared<HeavyObject>();
        weak_ptr = obj;
        std::cout << "obj.use_count() = " << obj.use_count() << std::endl;
    }
    // shared_ptr ömrü bittiği için HeavyObject silinir
    std::cout << "weak_ptr.use_count() = " << weak_ptr.use_count() << std::endl;
    if (auto shared_ptr = weak_ptr.lock()) {
        std::cout << "HeavyObject still alive\n";
    } else {
        std::cout << "HeavyObject is dead\n";
    }
    return 0;
}