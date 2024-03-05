#include <iostream>
using namespace std;

int main()
{
    int bilangan1;
    int bilangan2;
    string status;
    srand(time(0));
    bilangan1 = rand() % 10;
    bilangan2 = rand() % 10;
    if (bilangan1 == bilangan2)
    {
        status = "bilangan1 sama dengan bilangan2";
    }
    else if (bilangan1 > bilangan2)
    {
        status = "bilangan1 lebih besar dari bilangan2";
    }
    {
        status = "bilangan1 lebih kecil dari bilangan2";
    }

    cout << "Bilangan Pertama = " << bilangan1 << endl;
    cout << "Bilangan Kedua = " << bilangan2 << endl;
    cout << "Statusnya = " << status << endl;
}