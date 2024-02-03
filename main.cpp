#include <iostream>
using namespace std;
class Shape {
protected:
    string color;
    string name;
public:
    Shape(const string& name, const string& color) :color(color), name(name) {}
    void getInfo()const {
        cout << "your shape is " << name << "your color is " << color;
    }
};
class Rectangle : public Shape {
protected:
    int side;
    int sideBig;
public:
    Rectangle(const string& name, const string& color, const int& side1, const int& sideBig1) : Shape(name, color) { side = side1; sideBig = sideBig1; }
    void area()const {
        cout << "area is : " << sideBig * side << endl;
    }
    void perimeter()const {
        cout << "primeter is :" << (side + sideBig) * 2 << endl;
    }
    void getInfo()const {
        cout << "name is :" << name << endl;
        cout << "color is : " << color << endl;
        cout << "side is :" << side << endl;
        cout << "side big is " << sideBig << endl;
    }
};
class Square : public Rectangle {
public:
    Square(const string& name, const string& color, const int& side) :Rectangle(name, color, side, side) {}

};
class Circle :public Shape {
protected:
    int diameter1;
public:
    Circle(const string& name, const string& color, const int& diameter) :Shape(name, color) {
        diameter1 = diameter;

    }
    void area()const {
        cout << "area is : " << 3.14 * (diameter1 * diameter1);
    }
    void perimeter() const {
        cout << "perimeter is : " << (2 * 3.14 * diameter1);
    }
};
int main() {
    Shape d("d", "red");
    Rectangle r("r", "blue", 3, 3);
    Square s("s", "yellow", 4);
    Circle c("c", "gray", 4);
    c.area();

    return 0;
}
