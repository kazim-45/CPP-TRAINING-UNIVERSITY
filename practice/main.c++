#include<iostream>
using namespace std;
int main()
{
    char ch[4];

    cout<<"Enter characters: ";
    cin.get(ch, 4);

    cout<<"You entered: "<<ch<<endl;

    return 0;
}