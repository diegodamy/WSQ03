#include <iostream>
using namespace std;

int firstnumber;
int secondnumber;

int main(){

cout << "Reminder: This program only accepts integer numbers" << endl;
cout << endl;
cout <<"Please enter the first number:"<< endl;
cin >> firstnumber;
cout << "Please enter the second number: "<< endl;
cin >> secondnumber;
cout << endl;

cout <<"The difference between your first number and your second number is: ";
cout << firstnumber - secondnumber << endl;
cout << endl;
cout <<"The difference between your second number and your first number is: ";
cout << secondnumber - firstnumber << endl;
cout << endl;

cout <<"The product of both numbers is: ";
cout  << firstnumber*secondnumber <<endl;
cout << endl;

cout <<"The result of your first number divided by the second is: ";
cout << firstnumber/secondnumber << endl;
cout << endl;

cout <<"The remainder of the division is: ";
cout << firstnumber%secondnumber << endl;

}
