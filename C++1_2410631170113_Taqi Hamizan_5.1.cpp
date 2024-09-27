#include <iostream>
using namespace std;
int main()
{
    int no, hour;
    string name;
    cout << "Masukan NIP : ";
    cin >> no;
    cout << "Masukan Nama : ";
    cin >> name;
    cout << "Masukan Jumlah Jam Kerja : ";
    cin >> hour;
    if (hour >= 10)
    {
        cout << "NIP : " << no << endl;
        cout << "Nama : " << name << endl;
        cout << "Gaji Pokok/Hari & Lembur : " << (hour * 7500 * 3 / 2) << endl;
        cout << "Uang Makan : " << 10000 << endl;
        cout << "Transport : " << 13000 << endl;
    }
    else if (hour >= 9)
    {
        cout << "NIP : " << no << endl;
        cout << "Nama : " << name << endl;
        cout << "Gaji Pokok/Hari & Lembur : " << (hour * 7500 * 3 / 2) << endl;
        cout << "Uang Makan : " << 10000 << endl;
        cout << "Transport : " << 0 << endl;
    }
    else if (hour >= 8)
    {
        cout << "NIP : " << no << endl;
        cout << "Nama : " << name << endl;
        cout << "Gaji Pokok/Hari & Lembur : " << (hour * 7500 * 3 / 2) << endl;
        cout << "Uang Makan : " << 0 << endl;
        cout << "Transport : " << 0 << endl;
    }
    else if (hour < 8)
    {
        cout << "NIP : " << no << endl;
        cout << "Nama : " << name << endl;
        cout << "Gaji Pokok/Hari : " << (hour * 7500) << endl;
        cout << "Uang Makan : " << 0 << endl;
        cout << "Transport : " << 0 << endl;
    }
    else
    {
        cout << endl;
    }
    return 0;
}
