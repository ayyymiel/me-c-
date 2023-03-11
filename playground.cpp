#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double radius, area;
    
    double pi = 3.1415;

    cout << "----Area of a Circle Calculator----" << endl;
    cout << "Enter a radius: ";
    cin >> radius;

    area = pi * pow(radius, 2);
    cout << "The Circle's Area is: " << area << endl;
}
