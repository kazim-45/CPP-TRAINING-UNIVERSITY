#include<iostream>
using namespace std;
double calc_discount(int);
void show_total(int, double);

int main()
{
    
    int quantity;
    double discount;

    cout<<"Enter number of packages bought: ";
    cin>>quantity;
      while (quantity <= 0){
        cout<<"Enter a valid quantity: ";
        cin>>quantity;   
    }

    discount = calc_discount(quantity);
    show_total(quantity, discount);
    
}

double calc_discount(int quantity)
{
    double discount;

    if (quantity >= 10 && quantity <= 19)
    discount = 20;

    else if (quantity >= 20 && quantity <= 49)
    discount = 30;

    else if (quantity >= 50 && quantity <= 99)
    discount = 40;

    else if (quantity > 100)
    discount =  50;

    else discount =0;

    return discount;
}

void show_total(int quantity, double discount)
{
    const int PRICE = 99;
    int total_price = PRICE * quantity;
    cout<<"Total price = "<<total_price<<endl;
    
    double discount_price = total_price * (discount / 100);
    cout<<"Discount = "<<discount<<"%"<<endl;

    double total_cost;
    total_cost = total_price - discount_price;
    cout<<"Total cost = "<<total_cost<<endl;
}
