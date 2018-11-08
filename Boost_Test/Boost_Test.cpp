// Boost_Test.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <boost/lambda/lambda.hpp>
#include <iostream>
#include <iterator>
#include <algorithm>
using namespace std;
void Lambda_Boost();
int main()
{
	system("CLS");
	bool program_execute = true;
	do
	{
		cout << "Welcome to the Boost Library function test.  This programs test the 5 Functions within the Boost Library." << endl;
		cout << "1. Boost Lamda" << endl;
		cout << "2.Example Function" << endl;
		cout << "3.Example Function" << endl;
		cout << "4.Example Function" << endl;
		cout << "5.Example Function" << endl;
		cout << "6.Exit" << endl;
		cout << "\nPlease enter a function you would like to test:" << endl;
		int user_input;
		cin >> user_input;

		if (user_input == 1)
		{
			Lambda_Boost();
		}
		else if (user_input == 2)
		{
			cout << "2.Example Function" << endl;
		}
		else if (user_input == 3)
		{
			cout << "3.Example Function" << endl;
		}
		else if (user_input == 4)
		{
			cout << "4.Example Function" << endl;
		}

		else if (user_input == 5)
		{
			cout << "5.Example Function" << endl;
		}
		else if (user_input == 6)
		{
			program_execute = false;
			//exit(EXIT_SUCCESS);
		}
		else
		{
			system("CLS");
			cout << "Invalid User input, please enter a valid number" << endl;
			system("pause");
		}

	}
	while (program_execute != false);
	cout << "Exitting the program" << endl;

	return 0;

}
void Lambda_Boost()
{
	using namespace boost::lambda;
	typedef istream_iterator<int> in;

	cout << "Jason" << endl;
	for_each(in(cin), in(), cout << (_1 * 3) << '\n');
}