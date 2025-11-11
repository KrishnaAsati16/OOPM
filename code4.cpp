#include<iostream>
using namespace std;

class Vechile {
 public:
  string brand="Ford";
  void honk(){
    cout<< "Tuut, tuut! \n";
  }
};
class Car: public Vechile{
 public:
 string model = "Mustang";
};
int main (){
    Car myCar;
    myCar.honk();
    cout <<myCar.brand + " " +myCar.model;
    return 0; 
}

