// Demonstration of Inheritance

#include <iostream>

using namespace std;

class Rectangle
{

private:
    float length, breadth;

public:
    Rectangle(float length, float breadth)
    {
        this->length = length;
        this->breadth = breadth;
    }

    float area()
    {
        return length * breadth;
    }
};

class Cuboid : public Rectangle
{
private:
    float height;

public:
    Cuboid(float length, float breadth, float height) : Rectangle(length, height)
    {
        this->height = height;
    }
    float volume()
    {
        return area() * height;
    }
};

int main()
{
    Cuboid *cuboidObj = new Cuboid(5, 10, 20);
    cout << "Area : " << cuboidObj->area() << endl;
    cout << "Volume : " << cuboidObj->volume() << endl;
}