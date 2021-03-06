// Boost_Test.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <boost/lambda/lambda.hpp>
#include <boost/algorithm/string.hpp>
#include <boost/format.hpp>
#include<string>
#include <iostream>
#include <iterator>
#include <algorithm>
using namespace std;
using namespace boost::algorithm;
void lambda_boost();
void string_upper();
void string_lower();
void is_any_function();
void string_format();
int main()
{
	
	bool program_execute = true;
	do
	{
		system("CLS");
		cout << "Welcome to the Boost Library function test.  This programs test the 5 Functions within the Boost Library." << endl;
		cout << "1. Example Function Boost Lamda" << endl;
		cout << "2.Example Function String Upper Case" << endl;
		cout << "3.Example Function String Lower Case" << endl;
		cout << "4.Example Is Any Function String Search" << endl;
		cout << "5.Example Function String Format" << endl;
		cout << "6.Exit" << endl;
		cout << "\nPlease enter a function you would like to test:" << endl;
		int user_input;
		cin >> user_input;

		if (user_input == 1)
		{
			lambda_boost();

		}
		else if (user_input == 2)
		{
			system("CLS");
			cout << "2.Example Function String Upper Case" << endl;
			system("pause");
			string_upper();

		}
		else if (user_input == 3)
		{
			system("CLS");
			cout << "3.Example Function String Lower Case" << endl;
			system("pause");
			string_lower();
			
		}
		else if (user_input == 4)
		{
			system("CLS");
			cout << "4.Example Is Any Function String Search" << endl;
			system("pause");
			is_any_function();

		}

		else if (user_input == 5)
		{
			system("CLS");
			cout << "5.Example Function String Format" << endl;
			string_format();
			system("pause");
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
/**
 * \brief 
 */
void lambda_boost()
{
	//This function uses a series of Numbers and multiplies them by 3.

	//needs error handling to exit the function.
	using namespace boost::lambda;
	typedef istream_iterator<int> in;

	cout << "Jason" << endl;
	for_each(in(cin), in(), cout << (_1 * 3) << '\n');
}
/**
 * \brief 
 */
void string_upper()
{
	//This Function converts a string of characters into upper case.
	system("CLS");
	string Author_Name ="Jason Lane Johnson";
	cout << "This string will be converted into uppercase case: " <<endl<<endl<< Author_Name << endl << endl;
	system("pause");
	boost::algorithm::to_upper(Author_Name);

	cout << Author_Name << '\n';
	system("pause");
}
void string_lower()
{
	//This Function converts a string of characters into upper case.
	system("CLS");
	string Author_Name="Jason Lane Johnson";
	cout << "This string will be converted into lower case: " <<endl<<endl<< Author_Name << endl << endl;
	system("pause");
	boost::algorithm::to_lower(Author_Name);

	cout << Author_Name << '\n';
	system("pause");

}
void is_any_function()
{
	//This function searches through a string and removes designated characters from the left or right of the string
	system("CLS");
	std::string Author_Name = "--Jason Lane Johnson--";
	cout << "Watch the Is any function change this string: " << endl<< Author_Name << endl;
	system("pause");
	std::cout << trim_left_copy_if(Author_Name, is_any_of("-")) << '\n';
	system("pause");
	std::cout << trim_right_copy_if(Author_Name, is_any_of("-")) << '\n';
	system("pause");
	std::cout << trim_copy_if(Author_Name, is_any_of("-")) << '\n';
	system("pause");
}
void string_format()
{
	//This function allows you to add a format style to a variable.
	system("CLS");
	cout << "This function will modify a series of strings into a Month,Day,Year format 00/00/0000" << endl;
	int Day;
	cout << "Please Enter a Day:" << endl;
	cin >> Day;
	int Month;
	cout << "Please Enter a Month: " << endl;
	cin>> Month;
	int year;
	cout << "Please Enter a year: " << endl;
	cin >> year;

	cout << boost::format{ "%1%/%2%/%3%" } % Month % Day % year << '\n';

	system("pause");
}

