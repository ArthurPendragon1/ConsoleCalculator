#include<iostream>
using namespace std;

int main()
{
    int userInput = 0;
    double firstValue = 0.0, twoValue = 0.0, sum = 0.0;
    cout << "Enter a two numbers: " << endl;
    cin >> firstValue >> twoValue;

    cout << "Choose a needed action: " << endl;
    cin >> userInput;

    switch (userInput)
    {
    case 0: sum = firstValue + twoValue;
        break;
    case 1: sum = firstValue - twoValue;
        break;
    case 2: sum = firstValue * twoValue;
        break;
    case 3: sum = firstValue / twoValue;
        break;
    }

    cout << "Choosed action is: " << userInput << endl;
    cout << "Received sum is: " << sum << endl;
    return 0;
}