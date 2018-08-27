#include <iostream>
#include <string>
using namespace std;

int main()
{
	string color, est, body, animal, noun, pluralNoun;
	int a, b, c;
	cout << "Please input a color." << endl;
	cin >> color;
	cout << "Please input a word ending in est." << endl;
	cin >> est;
	cout << "Please input a body part." << endl;
	cin >> body;
	cout << "Please input a animal." << endl;
	cin >> animal;
	cout << "Please input a noun." << endl;
	cin >> noun;
	cout << "Please input a plural noun." << endl;
	cin >> pluralNoun;
	cout << "Please input a number." << endl;
	cin >> a;
	cout << "Please input another number." << endl;
	cin >> b;
	c = a - b; 

	cout << "The " << color << " Dragon is the " << est << " dragon of all. It has " << c << " " << body << ", and a " << animal << " shaped like a " << noun << ". It loves to eat " << pluralNoun << ", although it will feast on nearly anyhting." << endl;


	system("pause");
	return 0;
}