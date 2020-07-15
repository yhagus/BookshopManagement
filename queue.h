#pragma once
#include <iostream>
#include <cstdlib>
#define max 10

using namespace std;

struct Tumpukan
{
    int atas;
    string data[max];
}T;

void awal()
{
    T.atas = -1;
}

int kosong()
{
    if (T.atas == -1)
        return 1;
    else
        return 0;
}
int penuh()
{
    if (T.atas == max - 1)
        return 1;
    else
        return 0;
}
void input(string data)
{
    if (kosong() == 1)
    {
        T.atas++;
        T.data[T.atas] = data;
    }
    else if (penuh() == 0)
    {
        T.atas++;
        T.data[T.atas] = data;
    }
    else
        cout << "Full";
}

void hapus()
{
    if (kosong() == 0)
    {
        cout << "Data Empty";
        T.atas--;
    }
    else
        cout << "Data Empty";
}

void tampil()
{
    system("cls");
    cout << "\n\n";
    if (kosong() == 0)
    {
        for (int i = 1; i <= T.atas; i++)
        {
            cout << "\t" << i << ". " << T.data[i] << endl;
        }
    }
}

void bersih()
{
    T.atas = -1;
}