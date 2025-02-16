/*

file name:Chapter3exercise6.cpp
GitHub URL:https://github.com/Yaqoob7803/Chapter3Exercise6/edit/main/Chapter3Exercise6.cpp#L4C10
programmer:Yaqoob Nagi
Date:February 2025
Requirements:

Ingredient Adjuster
A cookie recipe calls for the following ingredients:
1.5 cups of sugai
1 cup of butter
2.75 cups of flour
The recipe produces 48 cookies with this amount of the ingredients. 
Write a program that asks the user how many cookies he or she wants to make,
then displays the number of cups of each ingredient needed for the specified number of cookies.
*/
#include <iostream>
using namespace std;


int main()
{
    const double SugarPerCookie = 1.5 / 48;
    const double ButterPerCookie = 1.0 / 48;
    const double FlourPerCookie = 2.75 / 48;

    int cookies;
    cout << "Enter the number of cookies you want to make: ";
    cin >> cookies;

    double sugar = SugarPerCookie * cookies; 
    double butter = ButterPerCookie * cookies; 
    double flour = FlourPerCookie * cookies; 
    
    cout << "To make " << cookies << "cookies, you will need: " << endl;
    cout << sugar << " cups of sugar" << endl;
    cout << butter << " cups of butter" << endl;
    cout << flour << " cups of flour" << endl;
   

    return 0;
}
