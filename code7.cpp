#include<iostream>
using namespace std;

class Parent{

    public: 
    int n;
    void print(){
        cout<<n<<endl;
    }
};


class Child: public Parent 
{
    public:
     void set_num(){
      n =22;
     }
};
int main(){
    Parent P1;
    Child C1;
C1.set_num();
P1.print();
}
