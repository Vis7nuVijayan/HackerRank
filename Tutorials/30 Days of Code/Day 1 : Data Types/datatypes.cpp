/*
 * Day 1 : Data Types
 *
 *		Author : Vishnu Vijayan
 *		  Date : 09-Jan-2017
 *		  Time : 7:33:02 PM
 *
 */

using namespace std;

#include<iostream>
#include<iomanip>

int main()
{
	int i = 4;
	double d = 4.0;
	string s = "HackerRank ";

    // Declare second integer, double, and String variables.
    int ii;
    double dd;
    string ss;

    // Read and save an integer, double, and String to your variables.
    // Note: If you have trouble reading the entire string, please go back and review the Tutorial closely.
    cin >> ii >> dd;
    cin.ignore();
    getline(cin, ss);

    // Print the sum of both integer variables on a new line.
    cout << i+ii << endl;

    // Print the sum of the double variables on a new line.
    cout << fixed << setprecision(1) << d+dd << endl;

    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
    cout << s+ss << endl;

	return 0;
}
