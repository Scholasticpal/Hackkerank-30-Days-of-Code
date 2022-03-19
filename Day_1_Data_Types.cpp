#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

    
    // Declare second integer, double, and String variables.
    int a;
    double b;
    string comp;
    
    cin >>a;
    cin >>b;
    getline(cin >> ws, comp);
    
    i = i + a;
    d = d + b;
    string fin = s + comp;
    cout<< i << endl;
    cout << fixed << setprecision(1);
    cout<< d<<endl;
    cout<< fin;
    
    
    // Read and save an integer, double, and String to your variables.
    // Note: If you have trouble reading the entire string, please go back and review the Tutorial closely.
    
    // Print the sum of both integer variables on a new line.
    
    // Print the sum of the double variables on a new line.
    
    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.

    return 0;
}
