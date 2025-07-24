//AVTAR SINGH ENTC A2
//24070123027
#include <iostream>
#include <string>
using namespace std;

int main() {
    int a;
    cout << "Enter any integer: ";
    cin >> a;
    cout << "Integer = " << a << " and size is " << sizeof(a) << " bytes" << endl;

    float b;
    cout << "Enter any number with decimal: ";
    cin >> b;
    cout << "Float = " << b << " and size is " << sizeof(b) << " bytes" << endl;

    double c;
    cout << "Enter any double value: ";
    cin >> c;
    cout << "Double = " << c << " and size is " << sizeof(c) << " bytes" << endl;

    string d;
    cout << "Enter any string (single word): ";
    cin >> d;
    cout << "String = " << d << " and size of object is " << sizeof(d) << " bytes" << endl;

    char e;
    cout << "Enter any single character: ";
    cin >> e;
    cout << "Char = " << e << " and size is " << sizeof(e) << " bytes" << endl;

    bool f;
    cout << "Enter any boolean (0 or 1): ";
    cin >> f;
    cout << "Boolean = " << f << " and size is " << sizeof(f) << " bytes" << endl;

    return 0;
}
//Enter any integer: 56
// Integer = 56 and size is 4 bytes
// Enter any number with decimal: 25.8
// Float = 25.8 and size is 4 bytes
// Enter any double value: fg
// Double = 0 and size is 8 bytes
// Enter any string (single word): String =  and size of object is 32 bytes
// Enter any single character: Char = � and size is 1 bytes
// Enter any boolean (0 or 1): Boolean = 255 and size is 1 bytes
