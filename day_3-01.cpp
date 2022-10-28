// Write a Program to find area of a circle using Function, take input from the user

#include <bits/stdc++.h>
using namespace std;

void areaOfCircle(float r)
{
    cout << "\nArea of circle with radius " << r << " is " << (3.14 * r * r) << endl;
}

int main()
{
    system("CLS");
    float radius;

    cout << "Enter radius of circle:\t";
    cin >> radius;

    areaOfCircle(radius);

    system("pause");
    return 0;
}