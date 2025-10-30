#include<iostream>

using namespace std;

class ArrayOperations {
public:

	int sum = 0;
	int array[5] = {};

	int calculateSum() {
		for (int i = 0; i < 5; i++) {
			sum += array[i];
		}
		return sum;
	}
};

int main() {

	ArrayOperations arr1;

	for (int i = 0; i < 5; i++) {
		cout << "Enter the " << i+1 << ". number: ";
		cin >> arr1.array[i];
	}
	cout << "Sum of the numbers is: " << arr1.calculateSum();

}