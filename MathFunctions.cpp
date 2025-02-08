#include<iostream>
#include"function.h"
using namespace std;

// task 1
int add(int num1, int num2) {
    int sum =0;
    sum = num1+ num2;
    return sum;
}

// task 2
float rectangleArea(float length, float width) {
    float area =0;
    area = length * width;
    return area;
}

// task 3
float circleCircumference(float radius) {
    float circumfrence ;
    circumfrence = 2* 3.14 * radius;
    return circumfrence;
}

// task 4
float fahrenheitToCelsius(float fahrenheit) {
    float Celsius =0.0;
    Celsius = (fahrenheit - 32) * 5 / 9;
    return Celsius;
}

// task 5
float calculateProfitPercentage(float sellingPrice, float costPrice){
    float ProfitPercentage = 0.0;
    ProfitPercentage = ((sellingPrice - costPrice)/costPrice)* 100;
    return ProfitPercentage;

}

