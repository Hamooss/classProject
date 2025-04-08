#include<iostream>
using namespace std;

class Circle {
    private:
        float r;
        const float PI = 3.14;
        float area, perimeter;

    public:
        Circle(float radius) {
            r = radius;
            area = PI * r * r;
            perimeter = 2 * PI * r;
        }
        void print() const {
            cout << "Radius: "<<r<< ", Area: "<<area<<", Perimeter: "<<perimeter<<"\n";
        }
};

int main() {
    Circle c1(100), c2(12), c3(8);

    c1.print();
    c2.print();
    c3.print();

    return 0;
}

//create by mahan Kazem