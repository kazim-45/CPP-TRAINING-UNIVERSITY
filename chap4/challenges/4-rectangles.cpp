/*The area of a rectangle is the rectangle’s length times its width. Write a program that
asks for the length and width of two rectangles. The program should tell the user which
rectangle has the greater area, or if the areas are the same.*/

#include<iostream>
using namespace std;
double area(double, double);
void compareAreas(double, double);
int main()
{
    double length1, width1, length2, width2, area1, area2;

    cout<<"Enter rectangle 1 length: ";
    cin>>length1;
    cout<<"Enter rectangle 1 width: ";
    cin>>width1;
    cout<<"Enter rectangle 2 length: ";
    cin>>length2;
    cout<<"Enter rectangle 2 width: ";
    cin>>width2;

    area1 = area(length1, width1);
    area2 = area(length2, width2);

    cout<<"Area of rectangle 1: ";
    cout<<area1<<endl;
    cout<<"Area of rectangle 2: ";
    cout<<area2<<endl;

    compareAreas(area1, area2);
}

double area(double l, double w)
{
    double area = l*w;
    return area;
}

void compareAreas(double a1, double a2)
{
    if (a1>a2)
    cout<<a1<<" is fucking greater than "<<a2<<endl;
    else if(a2>a1)
    cout<<a2<<" is fucking greater than "<<a2<<endl;
    else
    cout<<"Both areas are fucking equal!"<<endl;
}