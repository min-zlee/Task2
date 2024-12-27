#include <iostream>
using namespace std;

class Animal {
public:
    virtual void makeSound() = 0;
    virtual ~Animal() {}
};

class Dog : public Animal {
public:
    void makeSound() override {
        cout << "�۸�" << endl;
    }
};

class Cat : public Animal {
public:
    void makeSound() override {
        cout << "�߿�" << endl;
    }
};

class Cow : public Animal {
public:
    void makeSound() override {
        cout << "����" << endl;
    }
};


int main() {

    Animal* animal[3];

    animal[0] = new Dog();
    animal[1] = new Cat();
    animal[2] = new Cow();

    //�Ҹ�
    for (int i = 0; i < 3; i++) {
        animal[i]->makeSound();
    }

    //�޸�����
    for (int i = 0; i < 3; i++) {
        delete animal[i];
    }

    return 0;
}