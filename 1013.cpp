#include <iostream>

using namespace std;

int main()
{

    int a, b, c;
    cin >> a >> b >> c;
    int MaiorAB = (a + b + abs(a - b)) / 2;
    int MAX = (MaiorAB + c + abs(MaiorAB - c)) / 2;
    cout << MAX << " eh o maior" << endl;
    return 0;
}