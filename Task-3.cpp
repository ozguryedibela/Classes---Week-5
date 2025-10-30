#include<iostream>

using namespace std;
const double pi = 3.14;

class Circle {
public:

	double radius;
	double calculateArea() {
		return pi * radius * radius;
	}
};

int main() {

	Circle circ1;
	circ1.radius = 10;

	cout << "Area of the given circle is: " << circ1.calculateArea();
}