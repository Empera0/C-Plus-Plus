#include <iostream>

class Animal {
public:
    virtual void makeSound() {
        std::cout << "The animal makes a sound." << std::endl;
    }
};

class Cat : public Animal {
public:
    void makeSound() {
        std::cout << "Meow!" << std::endl;
    }
};

int main() {
    Animal* animalPtr = new Cat();

    animalPtr->Animal::makeSound(); // outputs "The animal makes a sound."

    animalPtr->makeSound(); // outputs "Meow!"

    delete animalPtr;
    return 0;
}