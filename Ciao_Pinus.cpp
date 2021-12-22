#include <iostream>

using namespace std;

int main()
{
    char answ;
    cout << "sei pinus?[y/n]\n";
    cin >>answ;
    if (answ != 'n' && answ!='y')
    cout << "palle\n";
    else if (answ=='y')
    cout << "ciao pinus\n";
    else
    cout << "ciao mis\n";

    cout<<"addio\n";

}