#include <iostream>
using namespace std;

//BEGIN
int main()
{
	//DECLARE CardBalance, TollAmount, NewBalance, Shortfall
	double CardBalance, TollAmount, NewBalance, Shortfall;
	//READ CardBalance
	cout << "Enter the card balance: ";
	cin >> CardBalance;
	//READ TollAmount
	cout << "Enter the toll amount: ";
	cin >> TollAmount;
	//IF CardBalance >= TollAmount THEN
	if (CardBalance >= TollAmount)
	{
		//DECLARE NewBalance = CardBalance - TollAmount
		NewBalance = CardBalance - TollAmount;
		//DISPLAY "Gate Open"
		cout << "Gate Open" << endl;
		//DISPLAY "New balance: "
		cout << "New balance: " << NewBalance << endl;
	}
	//ELSE
	else
	{
		//DECLARE Shortfall = TollAmount - CardBalance
		Shortfall = TollAmount - CardBalance;
		//DISPLAY "Insufficient balance. Please reload."
		cout << "Insufficient balance. Please reload." << endl;
		//DISPLAY "Shortfall: "
		cout << "Shortfall: " << Shortfall << endl;
	}
	//END
	return 0;
}

/*RESULT
balance: 10.00
toll: 5.30
Gate Open
new balance: 4.70

balance: 5.30
toll: 5.30
Gate Open
new balance: 0.00

balance: 5.29
toll: 5.30
Insufficient balance. Please reload.
Shortfall: 0.01

balance: 0.00
toll : 2.10
Insufficient balance. Please reload.
Shortfall: 2.10
*/