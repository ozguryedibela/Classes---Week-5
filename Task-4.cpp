#include<iostream>

using namespace std;

class Temperature {
public:

	double celsius;
	double toFahrenheit() {
		return (celsius * 9 / 5) + 32;
	}
	double toKelvin() {
		return celsius + 273.15;
	}
};

int main() {

	Temperature temp1;
	temp1.celsius = 100;

	cout << "Celsius to Fahrenheit is: " << temp1.toFahrenheit() << endl;
	cout << "Celsius to Kelvin is: " << temp1.toKelvin() << endl;

}