// Boost_Test.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <boost/lambda/lambda.hpp>
#include <iostream>
#include <iterator>
#include <algorithm>
using namespace std;
using namespace boost::algorithm;
void Lambda_Boost();
void String_Upper();
void String_Lower();
void Is_Any_Function();
int main()
{
	system("CLS");
	bool program_execute = true;
	do
	{
		cout << "Welcome to the Boost Library function test.  This programs test the 5 Functions within the Boost Library." << endl;
		cout << "1. Example Function Boost Lamda" << endl;
		cout << "2.Example Function String Upper Case" << endl;
		cout << "3.Example Function String Lower Case" << endl;
		cout << "4.Example Is Any Function String Search" << endl;
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
			cout << "2.Example Function String Upper Case" << endl;
			String_Upper();
		}
		else if (user_input == 3)
		{
			cout << "3.Example Function String Lower Case" << endl;
			String_Lower();
		}
		else if (user_input == 4)
		{
			cout << "4.Example Is Any Function String Search" << endl;
			Is_Any_Function();
		}

		else if (user_input == 5)
		{
			cout << "5.Example Function" << endl;
		}
		else if (user_input == 6)
		{
			program_execute = false;
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
	//This function uses a series of Numbers and multiplies them by 3.

	//needs error handling to exit the function.
	using namespace boost::lambda;
	typedef istream_iterator<int> in;

	cout << "Jason" << endl;
	for_each(in(cin), in(), cout << (_1 * 3) << '\n');
}
void String_Upper()
{
	//This Function converts a string of characters into upper case.
	string user_input;
	cout << "Please Enter a string you would like to make Upper Case." << endl;
	cin << user_input;
	boost::algorithm::to_upper(user_input);
	
	cout<< user_input << '\n';

}
void String_Lower()
{
	//This Function converts a string of characters into upper case.
	string user_input;
	cout << "Please Enter a string you would like to make Upper Case." << endl;
	cin << user_input;
	boost::algorithm::to_lower(user_input);

	cout << user_input << '\n';

}
void Is_Any_Function()
{
	//This function searches through a string and removes designated characters from the left or right of the string
	std::string s = "--Boost C++ Libraries--";
	std::cout << trim_left_copy_if(s, is_any_of("-")) << '\n';
	std::cout << trim_right_copy_if(s, is_any_of("-")) << '\n';
	std::cout << trim_copy_if(s, is_any_of("-")) << '\n';
}
