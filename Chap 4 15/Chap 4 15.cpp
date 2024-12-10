// Chap 4 15.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int weight, distance;
    double rate;
    double cost;
    do {
        cout << "Please enter the weight of package" << endl;
        cin >> weight;

        if (weight <= 0) {
            cout << "Invalid weight, please choose a value above zero" << endl;
        }
        else if (weight > 20) {
            cout << "Invalid weight, we do not accept above 20 kilograms" << endl;
        }
    } while (weight <= 0 || weight > 20);
    do {
        cout << "Please enter the shipping distance" << endl;
        cin >> distance;

        if (distance < 10) {
            cout << "Invalid distance, we do not travel below 3000 miles" << endl;
        }
        else if (distance > 3000) {
            cout << "Invalid distance, we do not travel above 3000 miles" << endl;
        }
    } while (distance < 10 || distance > 3000);
    if (weight <= 2) {
        rate = 1.10;
    }
    else if (weight <= 6) {
        rate = 2.20;
    }
    else if (weight <= 10) {
        rate = 3.70;
    }
    else if (weight <= 20) {
        rate = 4.80;
    }
    cout << "Rate per 500 miles is $" << fixed << setprecision(2) << rate << endl;
    cost = (distance / 500) * rate;
    cout << "Total cost for shipping is $" << fixed << setprecision(2) << cost << endl;
}
