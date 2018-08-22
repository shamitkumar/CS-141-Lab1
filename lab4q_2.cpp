//program to enter a temperature in celcius and converting it into fahrenheit
//include the library
#include <iostream>
using namespace std;
//including the function
int main() {
//declaring the variables
float b;
//asking for a value
cout <<"Please enter a temperature in celcius:" ;
//reading the variables 
cin >> b;
cout <<" The value you entered is " << b;
//performing the calculation
cout <<" and its value in fahrenheit is " <<(b*1.8)+32 <<"c" << ".\n";
return 0;
}

