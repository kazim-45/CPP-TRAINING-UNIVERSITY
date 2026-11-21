#include<iostream>
using namespace std;

int main()
{
    for (int code = 0; code <= 127; code++){
        char character = static_cast<char>(code);
        cout<<character;

        if(code % 16 == 0){
            cout<<endl;
        }
    }


    return 0;
}