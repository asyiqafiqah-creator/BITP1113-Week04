#include <iostream>

using namespace std;	

int main() {
	double BatteryValue;
	bool Charging;

	cout << "Enter the battery value: ";
	cin >> BatteryValue;
	cout << "Is the battery charging? (1 for yes, 0 for no): ";
	cin >> Charging;

	cout << (BatteryValue < 20) << endl;
	cout << (BatteryValue < 20 && !Charging) << endl;
	cout << (BatteryValue == 100 || Charging) << endl;
	cout << (BatteryValue >= 0 && BatteryValue <= 100) << endl;
	cout << (0 <= BatteryValue <= 100) << endl;
	return 0;
}