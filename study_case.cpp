#include <iostream>
using namespace std;
class Nilai
{

private:
    char nama[100][100];
    char dosen[100][100];
    char matakul[100][100];
    int nilai[100];
    int no;
    int jmlh;
    int rata;

public:
    void input();
    void proses();
    void output();
} n;

void Nilai::input()
{
    cout << "------------------ PROGRAM MENGINPUT NILAI MAHASISWA ------------------\n\n";

    cout << "masukkan jumlah mahasiswa: ";
    cin >> no;

    for (int i = 1; i <= no; i++)
    {
        cout << "\n========================================================================\n";
        cout << "masukkan nama mahasiswa: ";
        cin >> nama[i];
        cout << "Mata kuliah :";
        cin >> matakul[i];
        cout << "nama dosen :";
        cin >> dosen[i];
        cout << "masukkan nilai : ";
        cin >> nilai[i];
        cout << "\n========================================================================\n";
    }
}

void Nilai ::proses()
{
    for (int i = 1; i <= no; i++)
    {
        jmlh = jmlh + nilai[i];
    }
    rata = jmlh / no;
    cout << "total nilai rata-rata : " << rata;
    cout << "\n========================================================================\n";
}
void Nilai::output()
{
    for (int i = 1; i < no; i++)
    {
        cout << "nama mahasiswa : " << nama[i] << " " << endl;
        cout << "nama dosen : " << dosen[i] << " " << endl;
        cout << "Mata kuliah : " << matakul[i] << " " << endl;
    }
    cout << "\n========================================================================\n";
}

int main()
{
    n.input();
    n.proses();
    n.output();
    return 0;
}
