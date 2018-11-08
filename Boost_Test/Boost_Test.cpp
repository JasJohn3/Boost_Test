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
	cout << "Welcome to the Boost Library function test.  This programs test the 5 Functions within the Boost Library." << endl;


	cout << "Please enter a function you would like to test:" << endl;
		

}
void Lambda_Boost()
{
	using namespace boost::lambda;
	typedef istream_iterator<int> in;

	cout << "Jason" << endl;
	for_each(in(cin), in(), cout << (_1 * 3) << '\n');
}