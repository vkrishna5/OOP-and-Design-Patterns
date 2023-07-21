// Demonstration of Encapsulation and Abstraction

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

    float perimeter()
    {
        return 2 * (length + breadth);
    }

    bool isSquare()
    {
        return length == breadth;
    }
};

int main()
{
    Rectangle rectangleObj1(10, 5);
    cout << "Area : " << rectangleObj1.area() << endl;
    cout << "Perimenter : " << rectangleObj1.perimeter() << endl;
    cout << "Is it Square? : " << rectangleObj1.isSquare() << endl;

    Rectangle *rectangleObj2 = new Rectangle(10, 10);
    cout << "Area : " << rectangleObj2->area() << endl;
    cout << "Perimenter : " << rectangleObj2->perimeter() << endl;
    cout << "Is it Square? : " << rectangleObj2->isSquare() << endl;
}