//program to say hello world and print someone's fav food.

#include<iostream>
using namespace std;

int main(){

    string CxName;
    string favFood;
    cout << "Please enter your name: ";
    cin >> CxName;

    cout << "Hello world! " << CxName << endl;

    cout << "What is your favourite food?: ";

    cin >> favFood;
    cout << "Thank you " << CxName << ", we will serve " << favFood << " to your table, hot & fresh." << endl;

    return 0;

}
