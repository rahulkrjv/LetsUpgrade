// Write a Program to find factorial, take input from the user

#include <bits/stdc++.h>
using namespace std;

int factorial(int a)
{
    if ((a == 0) || (a == 1))
        return 1;

    return (a * (factorial(a - 1)));
}

int main()
{
    system("CLS");
    int num;

    cout << "Enter the numbere:\t";
    cin >> num;

    cout << "\n" << num << "! = " << (factorial(num)) << endl;

    system("pause");
    return 0;
}