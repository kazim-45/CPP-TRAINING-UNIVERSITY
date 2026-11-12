#include<iostream>
#include<string>
using namespace std;
void mix(string, string);
int main()
{
    cout<<"       ============= COLOR MIXER ============="<<endl;
    cout<<"Choose 2 colors from: red, blue & yellow (in lowercase!)"<<endl;
    cout<<"Enter first primary color: ";
    string in1;
    cin>>in1;
    cout<<"Enter second primary color: ";
    string in2;
    cin>>in2;

    mix(in1, in2);

    return 0;
}

void mix(string a, string b)
{
    const string c1 = "red", c2 = "blue", c3 = "yellow";
    
    if (a == c1 && b == c2 || a == c2 && b == c1)
     cout<<"Resultant color: Purple."<<endl;
    else if (a == c1 && b == c3 || a == c3 && b == c1) 
     cout<<"Resultant color: Orange."<<endl;
    else if (a == c2 && b == c3 || a == c3 && b == c2)
     cout<<"Resultant color: Green."<<endl;
    else
     cout<<"WRONG COLOR CHOICE!"<<endl;
}