#include <iostream>
using namespace std;

class Shape
{
private:
    float radius;
    float length;
    float width;

public:
    // Constructor for circle
    Shape(float r)
    {
        radius = r;
    }

    // Constructor for rectangle
    Shape(float l, float w)
    {
        length = l;
        width = w;
    }

    // Perimeter of circle
    void circlePerimeter()
    {
        float perimeter = 2 * 3.14159 * radius;
        cout << "Perimeter of Circle = " << perimeter << endl;
    }

    // Perimeter of rectangle
    void rectanglePerimeter()
    {
        float perimeter = 2 * (length + width);
        cout << "Perimeter of Rectangle = " << perimeter << endl;
    }

    // Destructor
    ~Shape()
    {
        cout << "Destructor called." << endl;
    }
};

int main()
{
    float r, l, w;

    cout << "Enter radius of circle: ";
    cin >> r;

    Shape circle(r);
    circle.circlePerimeter();

    cout << "\nEnter length of rectangle: ";
    cin >> l;

    cout << "Enter width of rectangle: ";
    cin >> w;

    Shape rectangle(l, w);
    rectangle.rectanglePerimeter();

    return 0;
}