#include <iostream>

using namespace std;

void tuplaa(int a);
void tuplaa_2(int *a);
int main()
{
    int a;
    cout << "Anna luku!" << endl;
    cin>>a;
    tuplaa(a);
    cout<<"mainissa a="<<a << endl;
    tuplaa_2(&a);
    cout<<"nyt mainissa a="<<a<<endl;
    return 0;
}

void tuplaa(int a){
    /*
     Tämä funktio luo uuden muuttujan a*/
    a=2*a;
    cout<<"funktiossa tuplaa a="<<a<<endl;

}
void tuplaa_2(int *a){
    /*Tämä funktio saa mainissa olevan a osoitteen
     ja se muokkaa sitä muistipaikan sisältöä.*/
    *a=*a*2;
}