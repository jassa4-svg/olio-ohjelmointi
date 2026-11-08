#include <iostream>

using namespace std;

int tuplaa(int a);


int main()
{
    int luku;
    cout << "Anna luku!" << endl;
    cin>>luku;
    luku = tuplaa(luku);
    cout<<"antamasi luku tuplattuna on = "<<luku;
    return 0;
}
int tuplaa(int a){
    return a*2;
}