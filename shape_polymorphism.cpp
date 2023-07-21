// Demonstration of Polymorphism

#include <iostream>

using namespace std;

class Shape
{
public:
    virtual void draw()
    {
        cout << "Shape" << endl;
    }
};

class Rectangle : public Shape
{
    void draw()
    {
        cout << "Rectangle" << endl;
    }
};

class Circle : public Shape
{
    void draw()
    {
        cout << "Circle" << endl;
    }
};

int main()
{
    Shape *shapeObj;

    shapeObj = new Rectangle();
    shapeObj->draw();

    shapeObj = new Circle();
    shapeObj->draw();
}