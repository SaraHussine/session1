#include <iostream>

using namespace std;

int main()
{
    cout << "Enter first number" << endl;
    int firstNum;
    cin>>firstNum;

    cout << "Enter second number" << endl;
    int secondNum;
    cin>>secondNum;

    int sum,subtract,multiply,divide;

    sum = firstNum + secondNum;
    subtract = firstNum - secondNum;
    multiply = firstNum * secondNum;
    divide = firstNum / secondNum;

    cout<< " sum = " << sum << endl;
    cout<< " subtract = " << subtract << endl;
    cout<< " multiply = " << multiply << endl;
    cout<< " divide = "  <<divide << endl;


    return 0;
}
