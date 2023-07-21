// Demonstration of Abstract Classes

#include <iostream>

using namespace std;

class Shape
{
public:
    virtual void draw() = 0;
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