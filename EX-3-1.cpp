#include<iostream>
using namespace std;

class Circle {
    private:
        float r;
        const float PI = 3.14;
        float area, perimeter;

    public:

        void set(float radius){
            r = radius;
        }
        float get_r()
            {return r;}
        void calculate_area(){
            area = PI * r * r;
        }
        void calculate_perimeter(){
            perimeter = 2 * PI * r;
        }
        void print(){
            cout <<"Area: "<<area<<" and Perimeter: "<<perimeter<<"\n";
        }
};

int main() {
    Circle c1,c2,c3;

    c1.set(100);
    c1.calculate_area();
    c1.calculate_perimeter();
    c1.print();

    c2.set(12);
    c2.calculate_area();
    c2.calculate_perimeter();
    c2.print();

    c3.set(8);
    c3.calculate_area();
    c3.calculate_perimeter();
    c3.print();


    return 0;
}

//create by mahan Kazem