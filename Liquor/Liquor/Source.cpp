//Page 91
// Jack Reis
// 8/30/18
#include <iostream>

using namespace std;

int main()
{
	double totalBill = 0.0, liquor = 0.0, tipPer = 0.0, totalNoLiquor = 0.0, tip = 0.0;
	cout << "Enter the total bill." << endl;
	cin >> totalBill;
	cout << "Enter the liquor charge." << endl;
	cin >> liquor;
	cout << "Enter tip percent. (Decimal)" << endl;
	cin >> tipPer;

	totalNoLiquor = totalBill - liquor;
	tip = totalNoLiquor * tipPer;

	cout << "Tip $" << tip << endl;

	system("pause");
	return 0;
}