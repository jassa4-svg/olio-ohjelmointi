#include <iostream>

using namespace std;

int tuplaa(int a);
void luvunTulostus(int a);

int main()
{
    int luku;
    int tuplattuLuku;
    cout << "Anna luku!" << endl;
    cin>>luku;
    tuplattuLuku = tuplaa(luku);
    luvunTulostus(tuplattuLuku);
    return 0;
}

int tuplaa(int a){
    return a*2;
}
void luvunTulostus(int tuplattu){
    cout<<"antamasi luku tuplattuna on = "<<tuplattu<<endl;
}