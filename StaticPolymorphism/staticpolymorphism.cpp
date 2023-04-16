#include <iostream>

using namespace std;

class Animal {
  public:
    void animalSound() {
    cout << "The animal makes a sound \n" ;
  }
};

// Derived class
class Dog : public Animal {
  public:
    void animalSound() {
    cout << "The dog says: bow wow \n" ;
  }
}; 

int main() {
  Animal myAnimal;
  Dog myDog;

  myAnimal.animalSound();
  myDog.animalSound();
  return 0;
} 