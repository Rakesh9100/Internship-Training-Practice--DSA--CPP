/*
Write a program to print the area of a rectangle. Take input the dimensions after prompting a message. Add the code snippet and input/ouput snapshot.
*/

#include <iostream>
using namespace std;

int main() {

    int length, breadth, area;
    cout<<"Please enter length: ";
    cin>>length;
    cout<<"Please enter breadth: ";
    cin>>breadth;
    area = length * breadth;
    cout<<"Area of Rectangle = "<<area<<" unit square"<<endl;

    return 0;
       
}
