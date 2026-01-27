#include <iostream>
using namespace std;

class shape {
public:
    void draw() {
        cout << "drawing shape" << endl;
    }
};

class rectangle : public shape {
public:
    float length, breadth;

    void inputLength() {
        cout << "enter length: ";
        cin >> length;
    }

    void inputBreadth() {
        cout << "enter breadth: ";
        cin >> breadth;
    }

    void area() {
        cout << "area of rectangle is: " << length * breadth << endl;
    }
};

int main() {
    rectangle r;
    r.draw();
    r.inputLength();
    r.inputBreadth();
    r.area();
    return 0;
}