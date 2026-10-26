#include<iostream>
using namespace std;
int main()
{
    string movie;
    const double adultPrice = 10, childPrice = 6, theaterProfit = 0.2;
    double adultTickets, childTickets, gross, net, distributor;

    cout<<"Movie name: ";
    cin>>movie;
    cout<<"Adult tickets sold: ";
    cin>>adultTickets;
    cout<<"Child tickets sold: ";
    cin>>childTickets;

    gross = (childPrice * childTickets) + (adultPrice * adultTickets);
    net = gross * theaterProfit;
    distributor = gross - net;

    cout<<"\nMovie name: "<<movie<<endl;
    cout<<"Adult tickets sold: "<<adultTickets<<endl;
    cout<<"Child tickets sold: "<<childTickets<<endl;
    cout<<"Gross box office profit: $"<<gross<<endl;
    cout<<"Net box office profit: $"<<net<<endl;
    cout<<"Amount paid to distributor: $"<<distributor<<endl;
    
}