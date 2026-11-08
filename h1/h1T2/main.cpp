#include <iostream>

using namespace std;

int laskeNelio(int luku);

int main()
{
    int annettu_luku;
    int nelio;
    cout << "Anna kokonaisluku" << endl;
    cin>>annettu_luku;
    nelio=laskeNelio(annettu_luku);
    cout << "Luvun "<<annettu_luku<<" nelio on "<<nelio << endl;
    return 0;
}

int laskeNelio(int luku)
{
    return luku*luku;
}