#include <iostream>

using namespace std;

int main()
{   int a;
    cout << "Anna kokonaisluku" << endl;
    cin >>a;

    if (a % 2 ==0)
        cout <<a<<" on parillinen.";
    else {
            cout <<a<<" on pariton.";
    }
    return 0;
}
