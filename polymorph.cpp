#include <iostream>
using namespace std;

class Animal {
    public:
        void animalSound(){
            cout << "The animal makes a sound." << endl;
        }
};
class Pig: public Animal {
    public:
        void animalSound(){
            cout << "The pig says: wee wee" << endl;
        }
};
class Dog: public Animal  {
    public:
        void animalSound(){
            cout << "The dog says: bow wow" << endl;
        }
};

int main(){
    Animal myAnimal;
    Pig myPig;
    Dog myDog;

    myAnimal.animalSound();
    myPig.animalSound();
    myDog.animalSound();
    return 0;
}
