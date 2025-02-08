#include <iostream>
#include "function.h"
using namespace std;

int main() {

    // task 1
    int a, b;
    cout<<"\n\t\t\t====================Task 1========================="<<endl;
         cout<<"\n\t\t\tPlease Enter the 1st integer number: ";
         cin>>a;
         cout<<"\n\t\t\tPlease Enter the 2nd integer number: ";
         cin>>b;
    cout<<"\n\t\t\tThe sum of two numbers is: "<<add(a,b);
    cout<<endl;

    // task 2
    float length, width;
    cout<<"\n\t\t\t====================Task 2========================="<<endl;
          cout<<"\n\t\t\tPlease Enter the length of the rectangle: ";
          cin>>length;
          cout<<"\n\t\t\tPlease Enter the width of the rectangle: ";
          cin>>width;
    cout<<"\n\t\t\tThe area of rectangle is : "<<rectangleArea(length, width);
    cout<<endl;

    // task 3
    int r;
    cout<<"\n\t\t\t====================Task 3========================="<<endl;
           cout<<"\n\t\t\tPlease Enter the radius of the circle: ";
           cin>>r;
    cout<<"\n\t\t\tThe circumference of the circle is: "<< circleCircumference(r);
    cout<<endl;

    // task 4
    float fahrenheit;
    cout<<"\n\t\t\t====================Task 4========================="<<endl;
           cout<<"\n\t\t\tPlease Enter the value of fahrenheit: ";
           cin>>fahrenheit;
    cout<<"\n\t\t\tThe result after converting fahrenheit to Celsius is: "<<fahrenheitToCelsius(fahrenheit);
    cout<<endl;

    // task 5
    float sellingPrice, costPrice;
    cout<<"\n\t\t\t====================Task 5========================="<<endl;
           cout<<"\n\t\t\tPlease Enter the selling price: ";
           cin>>sellingPrice;
           cout<<"\n\t\t\tPlease Enter the cost price: ";
           cin>>costPrice;
    cout<<"\n\t\t\tThe percentage of the profit is: "<<calculateProfitPercentage(sellingPrice, costPrice);
    cout<<endl;
    cout<<"\n\t\t\t==================================================="<<endl;

    return 0;
}

