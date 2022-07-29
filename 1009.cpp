#include <stdio.h>
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{

    char seller_Name[100];
    double fixed_Salary, seller_Receives, X;
    cin >> seller_Name >> fixed_Salary >> seller_Receives;
    X = (seller_Receives * .15);
    double TOTAL = fixed_Salary + X;
    cout << "TOTAL = R$ " << fixed << setprecision(2) << TOTAL << endl;
    return 0;
}