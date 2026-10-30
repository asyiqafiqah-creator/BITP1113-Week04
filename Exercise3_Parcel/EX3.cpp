#include <iostream>
#include <iomanip>

using namespace std;

//BEGIN
int main()
{
	double weight, fee;
	cout << fixed << setprecision(2);

	//READ weight
	cout << "Enter the weight of the parcel (kg): ";
	cin >> weight;
	//SET fee = 8.00
	if (weight <= 2.0)
		fee = 8.00;
	//IF weight > 2.0 THEN
	//fee = fee + 5.00
	else
		fee = 8.00 + 5.00;
	//DISPLAY FEE
	cout << "The delivery fee is: RM" << fee << endl;
	//DISPLAY "Heavy parcel: RM5.00 surcharge added"
	if (weight > 2.0)
		cout << "Heavy parcel: RM5.00 surcharge added" << endl;
	return 0;
	//END
}

/*RESULT
1.5kg=> The delivery fee is: RM8.00
2.0kg=> The delivery fee is: RM8.00
2.1kg=> The delivery fee is: RM13.00
7.25kg=> The delivery fee is: RM33.00*/