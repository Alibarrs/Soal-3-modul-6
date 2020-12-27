#include <iostream>

using namespace std;

int a,b;

void penjumlahan (int a, int b)
{
    int c=a+b;
    cout << "Hasil Penjumlahan : " << c << endl;
}

void pengurangan (int a, int b)
{
    int c=a-b;
    cout << "Hasil Pengurangan : " << c << endl;
}

void pembagian (int a, int b)
{
    float c=a/b;
    cout << "Hasil Pembagian : " << c << endl;
}

void perkalian (int a, int b)
{
    int c=a*b;
    cout << "Hasil Perkalian : " << c << endl;
}

void perpangkatan (int a, int b)
{
    int c = 1;
    for (int i=0; i<b; i++)
    {
        c*=a;
    }

    cout << "Hasil Perpangkatan : " << c << endl;
}


int main ()
{
    int angka;
    cout <<"   Kalkulator   " << endl;
    cout << "1. Pemjumlahan" << endl;
    cout << "2. Pengurangan" << endl;
    cout << "3. Pembagian" << endl;
    cout << "4. Perkalian" << endl;
    cout << "5. Perpangkatan" << endl;
    cout << "Masukkan pilihan anda : ";
    cin >> angka;
    cout << endl;

    if (angka==1)
    {
        cout << "Masukkan Bilangan Pertama : ";
        cin >> a;
        cout << "Masukkan Bilangan kedua : ";
        cin >> b;
        penjumlahan (a, b);
    }

    else if (angka==2)
    {
        cout << "Masukkan Bilangan Pertama : ";
        cin >> a;
        cout << "Masukkan Bilangan kedua : ";
        cin >> b;
        pengurangan (a, b);
    }

    else if (angka==3)
    {
        cout << "Masukkan Bilangan Pertama : ";
        cin >> a;
        cout << "Masukkan Bilangan kedua : ";
        cin >> b;
        pembagian (a, b);
    }

    else if (angka==4)
    {
        cout << "Masukkan Bilangan Pertama : ";
        cin >> a;
        cout << "Masukkan Bilangan kedua : ";
        cin >> b;
        perkalian(a, b);
    }

    else if (angka==5)
    {
        cout << "Masukkan Bilangan Pertama : ";
        cin >> a;
        cout << "Masukkan Bilangan kedua : ";
        cin >> b;
        perpangkatan (a, b);
    }

}
