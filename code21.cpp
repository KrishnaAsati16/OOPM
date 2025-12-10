#include<iostream>
using namespace std;
class Car {
    public:
       string brand;
       string model;
       int year;
       Car(string x,string y, int z)  {
        brand = x;
        model = y;
        year = z;
       }
};
int main() {
    Car car1("Toyota", "Fortuner", 2022);
    cout << "Brand: " << car1.brand << endl;
    cout << "Model: " << car1.model << endl;
    cout << "Year: " << car1.year << endl;
    return 0;
}