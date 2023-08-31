#include <iostream>

using namespace std;

class Rectangle {
 public:
  float width;
  float length;

  Rectangle(float width, float length) {
    this->width = width;
    this->length = length;
  }

  float calculateArea() { return width * length; }

  float calculatePerimeter() { return 2 * (width + length); }
};

int main() {
  float base, height;

  cout << "\nEnter width of rectangle : ";
  cin >> base;

  cout << "Enter the length of Rectangle : ";
  cin >> height;

  Rectangle rectangle(base, height);

  cout << "\nArea of rectangle : " << rectangle.calculateArea();
  cout << "\nPerimeter of rectangle: " << rectangle.calculatePerimeter()
       << endl;

  return 0;
}
