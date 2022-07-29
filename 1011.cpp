#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

    double R;
    cin >> R;
    double VOLUME = ((4 / 3.0) * 3.14159 * (R * R * R));
    cout << "VOLUME = " << fixed << setprecision(3) << VOLUME << endl;

    return 0;
}