#include <iostream>
using namespace std;

int main()

{
    float matematika, fisika, rerata;
    string status;
    cout << "Masukkan nilai matematika : " << endl;
    cin >> matematika;
    cout << "Masukkan nilai fisika : " << endl;
    cin >> fisika;
    rerata = (matematika + fisika) / 2;
    if (matematika >= 71)
    {
        status = "Lulus";
    }
    else if (rerata > 60)
    {
        status = "Lulus";
    }
    else
    {
        status = "Gagal";
    }
    cout << "Rerata = " << rerata << endl;
    cout << "Statusnya = " << status << endl;
}