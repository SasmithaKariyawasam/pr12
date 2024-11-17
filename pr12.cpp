#include <iostream>
using namespace std;

int main()
{
    float far, cel;
    cout<<"Enter the temperature in Celsius: ";
    cin>>cel;

    far = (9*cel/5)+32;

    cout<<"Celsius "<<cel<<" in Fahrenheit is "<<far<<".";
    return 0;
}
