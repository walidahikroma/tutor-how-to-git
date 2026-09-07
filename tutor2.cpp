//Membuat program kerucut
//dibuat oleh Walidah
#include <iostream>
using namespace std;

int main () {
    int radius;
    int tinggi;
    float phi = 3.14;

    cin >> radius;
    cin >> tinggi;
    cout << "luas alas: " << phi * radius * radius << endl;
    cout << "volume kerucut: " << (phi * radius * radius * tinggi) / 3 << endl;

    

    return 0;
}
