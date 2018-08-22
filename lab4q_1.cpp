//converting length centimeter to kilometer 
//include library 
#include <iostream>
using namespace std;
//include the function 
int main() {
//declaring a variable 
float a;
//asking for an input value 
cout <<"Please enter an object's length in centimeter: ";
//reading the variable
cin >>a;
cout <<"the value you entered is " << a;
//performing the calculation
cout <<" and its value in meter is" <<a/100 <<"m" << endl;
cout <<" and its value in kilometer is" <<a/100000 <<"km" << ".\n";
//ending 
return 0;
}

