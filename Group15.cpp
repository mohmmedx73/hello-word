#include <iostream>
#include <cmath>
using namespace std;

int main() {

    int a, b, c, x1, x2, discriminant, P, Z;
    cout << "Enter coefficients a, b and c: ";
    cin >> a >> b >> c;
    discriminant = b*b - 4*a*c;

    if (discriminant > 0) {
        x1 = (-b + sqrt(discriminant)) / (2*a);
        x2 = (-b - sqrt(discriminant)) / (2*a);
        cout << "then the equation has two real roots." << endl;
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    }

    else if (discriminant == 0) {
        cout << " then the equation has a single real root." << endl;
        x1 = (-b + sqrt(discriminant)) / (2*a);
        cout << "x1 = x2 =" << x1 << endl;
    }

    else {
        P = -b/(2*a);
        Z =sqrt(-discriminant)/(2*a);
        cout << "then the equation has two complex roots"  << endl;
        cout << "x1 = " << P << "+" << Z << "i" << endl;
        cout << "x2 = " << P << "-" << Z << "i" << endl;
    }

}
