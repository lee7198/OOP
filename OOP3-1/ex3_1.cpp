#include <iostream>
using namespace std;

class Circle {
  public:
    int radius;
    double getArea();
};

double Circle::getArea() {
  return 3.14*radius*radius;
}

int main() {
  Circle donut;
  donut.radius = 1;
  double area = donut.getArea();
  cout << "dount 면적은 " << area << endl;

  Circle Pizza;
  Pizza.radius = 30;
  area = Pizza.getArea();
  cout << "Pizza 면적은 " << area << endl;
}