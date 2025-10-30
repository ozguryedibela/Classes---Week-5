#include<iostream>
#include<string>

using namespace std;

class Student {
public:

	string name;
	int grades[3] = {};
	double average = 0;

	double calculateAverage() {
		for (int i = 0; i < 3; i++) {
			average += grades[i];
		}
		average = average / 3;
		return average;
	}
};

int main() {
	Student std1;

	std1.name = "Ozgur";
	std1.grades[0] = 25;
	std1.grades[1] = 50;
	std1.grades[2] = 65;

	cout << "Student name: " << std1.name << endl << "Average grade: " << std1.calculateAverage();
}