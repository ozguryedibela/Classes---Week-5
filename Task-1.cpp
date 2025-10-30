#include<iostream>

using namespace std;

class Rectangle {
public:

	double width;
	double height;

	double calculateArea() {
		return width * height / 2;
	}
};

int main() {

	Rectangle rec1;
	rec1.height = 3;
	rec1.width = 5;

	cout << "Area of the given rectangle is: " << rec1.calculateArea();
}