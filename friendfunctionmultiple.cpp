#include <iostream>
using namespace std;

class ClassB; // Forward declaration

class ClassA {
private:
    int valueA;

public:
    ClassA(int a) : valueA(a) {}

    // Declare friend function
    friend int multiplyData(ClassA, ClassB);
};

class ClassB {
private:
    int valueB;

public:
    ClassB(int b) : valueB(b) {}

    // Declare friend function
    friend int multiplyData(ClassA, ClassB);
};

// Friend function definition
int multiplyData(ClassA objA, ClassB objB) {
    return objA.valueA * objB.valueB;
}

int main() {
    ClassA a(5);
    ClassB b(4);

    cout << "Multiplication of values: " << multiplyData(a, b) << endl;

    return 0;
}