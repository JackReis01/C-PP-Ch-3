#include <iostream>
#include <string>
using namespace std;
 
int main()
{
	string userFirst, userSecond;
	double money, total;

	cout << "What are you converting? (American British Mexican Japanese)" << endl;
	cin >> userFirst;
	cout << "To..." << endl;
	cin >> userSecond;
	cout << "How many " << userFirst << " do you have?" << endl;
	cin >> money;

	// American to British
	if ((userFirst == "American") && (userSecond == "British"))
	{
		total = money * .6318;
		cout << "You would have " << total << " Pounds." << endl;

	}
	// American to Mexican
	if ((userFirst == "American") && (userSecond == "Mexican"))
	{
		total = money * 12.8863;
		cout << "You would have " << total << " Pesos." << endl;

	}
	// American to Japanese
	if ((userFirst == "American") && (userSecond == "Japanese"))
	{
		total = money * 82.34;
		cout << "You would have " << total << " Yen." << endl;

	}
	// British to American
	if (userFirst == "American")
	{
		total = money / .6318;
		cout << "You would have " << total << " Dollars." << endl;

	}
	// Mexican to American 
	if (userFirst == "American")
	{
		total = money / 12.8863;
		cout << "You would have " << total << " Dollars." << endl;

	}

	// Japanese to American 
	if (userFirst == "American")
	{
		total = money / 82.34;
		cout << "You would have " << total << " Dollars." << endl;

	}




	system("pause");
	return 0;
}