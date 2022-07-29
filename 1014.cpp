#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

    int X;
    double Y, ans;
    cin >> X >> Y;
    ans = X / Y;
    cout << fixed << setprecision(3) << ans << " km/l" << endl;

    return 0;
}