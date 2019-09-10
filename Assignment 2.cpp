/*
Kevin Lehman - 1463553
Tarrant County College - COSC 1437 - Fall 2017
Assignment  2
*/

#include <iostream>
using namespace std;

void outputbottles(int);
void outputbottles1(int);
void outputbottles2(int);

int main()
{
	int Bottles;

	cout << "How many bottles of beer are on the wall?" << endl;
	cin >> Bottles;

	if (Bottles > 0 && Bottles <= 101)
	{
		while (Bottles > 2)
		{
			outputbottles(Bottles);
			Bottles = Bottles - 1;
		}
		if (Bottles != 1)
		{
			outputbottles1(Bottles);
		}
		else
			outputbottles2(Bottles);
			
	}

	else
	{
		cout << "That is not a valid number of bottles. Please restart and enter a value between 1 and 101" << endl;
	}

	system("pause");
	return 0;

}

void outputbottles(int Bottles)
{
	cout << Bottles << " bottles of beer on the wall. " << Bottles << " bottles of beer. Take 1 down pass it around. " << (Bottles - 1) << " bottles of beer on the wall." << endl;
}

void outputbottles1(int Bottles)
{
	cout << Bottles << " bottles of beer on the wall. " << Bottles << " bottles of beer. Take 1 down pass it around. " << (Bottles - 1) << " bottle of beer on the wall." << endl;
	cout << "1 bottle of beer on the wall. 1 bottle of beer. Take 1 down pass it around. 0 bottles of beer on the wall." << endl;
}

void outputbottles2(int Bottles)
{
	cout << "1 bottle of beer on the wall. 1 bottle of beer. Take 1 down pass it around. 0 bottles of beer on the wall." << endl;
}