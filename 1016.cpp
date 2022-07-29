#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int A, B;
    cin >> A >> B;
    double Output = (A * B) / 12.0;
    cout << fixed << setprecision(3) << Output << endl;
    return 0;
}