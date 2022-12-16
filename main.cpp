#include <iostream>
#include <string> //working with strings
#include <iomanip> //file work
#include <cmath>

using namespace std;

int multipliesByTwo(int userChoice);

int main()
{
    int userNum;

    cout << "Please enter a number: " << '\n';
    cin >> userNum;

    int userChoice = multipliesByTwo(userNum);

    cout << "The result would be " << userChoice << '\n';
    return 0;
}

int multipliesByTwo(int userChoice)
{
    return userChoice *= 2;
}