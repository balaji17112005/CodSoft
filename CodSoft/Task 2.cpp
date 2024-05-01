#include <iostream>
using namespace std;

double add(double x, double y) 
{
    return x + y;
}

double subtract(double x, double y) 
{
    return x - y;
}

double multiply(double x, double y) 
{
    return x * y;
}

double divide(double x, double y) 
{
    if (y == 0) 
    {
        cout << "Error! Division by zero is not possible.";
        return 0;
    } 
    else 
    {
        return x / y;
    }
}

int main() 
{
    string choice;
    double a,b;

    cout << "Select operation:" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cout << "Enter choice (Addition / Subtraction / Multiplication / Division): ";
    cin >> choice;

    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;

    if (choice == "Addition") 
    {
        cout << a << " + " << b << " = " << add(a,b) <<endl;
    } 
    else if (choice == "Subtraction") 
    {
        cout << a << " - " << b << " = " << subtract(a,b) <<endl;
    } 
    else if (choice == "Multiplication") 
    {
        cout << a << " * " << b << " = " << multiply(a,b) <<endl;
    } 
    else if (choice == "Division") 
    {
        cout << a << " / " << b << " = " << divide(a,b) <<endl;
    } 
    else 
    {
        cout << "Invalid input";
    }

    return 0;
}
