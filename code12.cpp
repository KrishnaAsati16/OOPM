#include<iostream>
using namespace std;
class Outer
{
    public:
    class Inner
{
    public :
    void display()
    {
        std::cout << "Inner class\n";
    }
};
};
int main() {
    Outer::Inner obj;
    obj.display();  // Output: Inner class
    return 0;
}