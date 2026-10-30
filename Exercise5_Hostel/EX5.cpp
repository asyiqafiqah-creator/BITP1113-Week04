#include <iostream>
using namespace std;

//BEGIN
int main()
{
	//DECLARE EnterTime, LateEntry
	double EnterTime;

	//DISPLAY "Enter the time of entry (in 24-hour format): "
	cout << "Enter the time of entry (in 24-hour format): ";
	//READ EnterTime
	cin >> EnterTime;

	//IF EnterTime >= 23.00 THEN
	if (EnterTime >= 23.00) 
	{
		//DISPLAY "Late entry: sign the book" and "Show your matric card"
		cout << "Late entry: sign the book" << endl;
		cout << "Show your matric card" << endl;
	}
	//ELSE IF EnterTime < 6.00 THEN
	else if (EnterTime < 6.00)
	{
		//DISPLAY "Welcome back"
		cout << "Welcome back" << endl;
	}

	cout << "Good night" << endl;
	//END
	return 0;
}