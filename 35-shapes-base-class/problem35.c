#include <iostream>

using namespace std;

class Shape {
 protected:
  virtual float area() = 0;
};

class Circle : protected Shape {
 public:
  float radius;

  float area() { return 3.14 * (radius * radius); }
};

class Square : protected Shape {
 public:
  float side;

  float area() { return side * side; }
};

int main() {
  Circle circle;
  Square square;

  cout << "\nEnter length of circle : ";
  cin >> circle.radius;

  cout << "Enter side length of square : ";
  cin >> square.side;

  cout << "\nThe area of circle : " << circle.area() << endl;

  cout << "The area the square : " << square.area() << endl;

  return 0;
}