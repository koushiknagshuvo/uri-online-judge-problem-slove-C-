#include <stdio.h>
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    float A, B, C, med;
    cin >> A >> B >> C;
    med = ((A * 2) + (B * 3) + (C * 5)) / (2 + 3 + 5);
    cout << "MEDIA = " << fixed << setprecision(1) << med << endl;
    return 0;
}