//
//  main.cpp
//  Assignment_10
//
//  Created by Noah Honickman on 1/2/21.
//This program takes three times and stores them in an array and prints out the average

#include <iostream>
#include <string>
#include <cstring>
#include <array>
using namespace std;
int main() {
    double first;
    double second;
    double third;
    
    cout << "Enter three times for the forty yard dash." << "\n";
    cin >> first;
    cout << "\n";
    cin >> second;
    cout << "\n";
    cin >> third;
    cout << "\n";
    
    array <double, 3> arr = {first, second, third,};
    double average = (arr[0] + arr[1] + arr[2])/3;
    cout << "The average of the three times is: " << average << "seconds. \n";
    
    return 0;
}
