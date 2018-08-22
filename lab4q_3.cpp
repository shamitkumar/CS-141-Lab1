//program to convert temperature in fahrenheit to celcius
//include the library
#include <iostream>
using namespace std;
//including functions 
int main(){
//declaring a function
float temperature;
//asking for an input value
cout <<" Enter any temperture in fahrenheit" ;
//reading the input value
cin >> temperature;
cout <<" The value you entered is "<<temperature ;
//doing the calculation 
cout <<"and its value in celcius is " << (temperature-32)*(0.56) <<".\n";
//end
return 0;
}

 
