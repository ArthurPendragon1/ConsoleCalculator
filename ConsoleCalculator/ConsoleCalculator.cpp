#include<iostream>
using namespace std;

int main()
{
    int userInput = 0;
    double firstValue = 0.0, twoValue = 0.0, sum = 0.0;
    cout << "Enter a two numbers: " << endl;
    cin >> firstValue >> twoValue;

    cout << "Choose a needed action: " << endl;
    cout << "[0: +], [1: -], [2: *], [3: /], [4: %]," << endl;
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
    case 4:
    {
        double percentage;
        cout << "Enter the percentage: ";
        cin >> percentage;

        double result = (percentage / 100.0) * firstValue;
        sum = result;

        break;
    }
    default:
        cout << "You are invalid <3 ";
        return 1;
    }
    
    cout << "Choosed action is: " << userInput << endl;
    cout << "Received sum is: " << sum << endl;
    return 0;
}