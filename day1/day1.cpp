#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

    
    // Declare second integer, double, and String variables.
    int input_int;
    double input_double;
    string input_string;

    // Read and save an integer, double, and String to your variables.
    // Note: If you have trouble reading the entire string, please go back and review the Tutorial closely.
    
    cin>> input_int;
    cin>> input_double;
    cin.ignore(256,'\n');
    getline(cin,input_string);
    // Print the sum of both integer variables on a new line.
    
    cout<<i+input_int<<endl;
    cout<<fixed<<setprecision(1)<<d+input_double<<endl;
    cout<<s<<input_string;
    // Print the sum of the double variables on a new line.
    
    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.

    return 0;
}
