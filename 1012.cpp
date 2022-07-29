#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

    double A, B, C;
    cin >> A >> B >> C;

    double TRIANGULO = ((.5) * A * C);
    double CIRCULO = 3.14159 * C * C;
    double TRAPEZIO = ((.5) * C * (A + B));
    double QUADRADO = B * B;
    double RETANGULO = A * B;

    cout << "TRIANGULO: " << fixed << setprecision(3) << TRIANGULO << endl;
    cout << "CIRCULO: " << fixed << setprecision(3) << CIRCULO << endl;
    cout << "TRAPEZIO: " << fixed << setprecision(3) << TRAPEZIO << endl;
    cout << "QUADRADO: " << fixed << setprecision(3) << QUADRADO << endl;
    cout << "RETANGULO: " << fixed << setprecision(3) << RETANGULO << endl;
    return 0;
}