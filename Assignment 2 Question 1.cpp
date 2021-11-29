/*
Name: Robert Walsh, Samuel Mpoloka
*/

#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

int main()

{
	double balance = 0;
	int regCoffe = 0;
	int smallCoffe = 0;
	int miniTart = 0;
	int chocolate = 0;
	int donut = 0;
	int noCoffe = 0;
	int noSweet = 0;
	double regCoffePrice = 1.75;
	double smallCoffePrice = 1.00;
	double miniTartPrice = 0.5;
	double chocolatePrice = 0.6;
	double donutPrice = 1.00;
	
	cout << "Please enter amount of money" << endl;
	cin >> balance;
	
	if (balance >= 1.75) regCoffe++, balance = balance-regCoffePrice;
	else if (balance >= 1.00) smallCoffe++, balance = balance-smallCoffePrice;
	else noCoffe++;
	
	if (balance >= 1.00) donut++, balance = balance-donutPrice;
	else if (balance >= .60) chocolate++, balance = balance-chocolatePrice;
	else if (balance >= 0.50) miniTart++, balance = balance-miniTartPrice;
	else noSweet++;
	
	cout << "Your Selection is..." << endl;
	if (regCoffe != 0) cout << "A regular coffee";
	if (smallCoffe != 0) cout << "A small coffee";
	if (noCoffe != 0 ) cout << "No coffee";
	cout << " and";
	if (miniTart != 0) cout << " a mini tart" << endl;
	if (chocolate != 0) cout << " a chocolate" << endl;
	if (donut != 0) cout << " a donut" << endl;
	if (noSweet != 0) cout << " no sweet" << endl;
	
}
/*
Output:

Please enter amount of money
5.00
Your Selection is...
A regular coffee and a donut

--------------------------------
Process exited after 3.565 seconds with return value 0
Press any key to continue . . .


Please enter amount of money
2.35
Your Selection is...
A regular coffee and a chocolate

--------------------------------
Process exited after 3.141 seconds with return value 0
Press any key to continue . . .

Please enter amount of money
0.25
Your Selection is...
No coffee and no sweet

--------------------------------
Process exited after 5.892 seconds with return value 0
Press any key to continue . . .


Please enter amount of money
1.50
Your Selection is...
A small coffee and a mini tart

--------------------------------
Process exited after 4.443 seconds with return value 0
Press any key to continue . . .

*/
