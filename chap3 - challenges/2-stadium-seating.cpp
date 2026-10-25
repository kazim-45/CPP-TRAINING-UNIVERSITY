#include<iostream>
using namespace std;
int main()
{
    const double cost_A = 15, cost_B = 12, cost_C = 9;
    int A, B, C;
    double income;

    cout<<"A class tickets sold: ";
    cin>>A;
    cout<<"B class tickets sold: ";
    cin>>B;
    cout<<"C class tickets sold: ";
    cin>>C;

    income = (A*cost_A) + (B*cost_B) + (C*cost_C);

    cout<<"Total income generated = $"<<income<<endl;

    return 0;
}