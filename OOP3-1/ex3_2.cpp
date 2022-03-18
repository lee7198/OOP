#include <iostream>
using namespace std;

class Rectangle {
  public:
    int width, height;
    Rectangle();
    int getArea();
};

Rectangle::Rectangle() {
  width = 3;
  height = 6;
  getArea();
  cout << "사각형의 면적은 " << getArea() << endl;
};

int Rectangle::getArea() {
  return width * height;
}

int main() {
  Rectangle();
}