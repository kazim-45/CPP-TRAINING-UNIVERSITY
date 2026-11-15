#include<iostream>
using namespace std;
void result(double);
int main()
{
    double wavelength;

    cout<<"Enter wavelenght of the EM Wave: ";
    cin>>wavelength;

    result(wavelength);

    return 0;
}

void result(double wl)
{
    if (wl < 0 && wl >= 1E-2){
        cout<<"This wave is a 'Radio Wave'"<<endl;
    }
    else if (wl < 1E-2 && wl >= 1E-3){
        cout<<"This wave is a 'Microwave'"<<endl;
    }
    else if (wl < 1E-3 && wl >= 7E-7){
        cout<<"This wave is an 'Infrared Wave'"<<endl;
    }
    else if (wl < 7E-7 && wl >= 4E-7){
        cout<<"This wave is 'Visible Light'"<<endl;
    }
    else if (wl < 4E-7 && wl >= 1E-8){
        cout<<"This wave is 'Ultra Violet'"<<endl;
    }
    else if (wl < 1E-8 && wl >= 1E-11){
        cout<<"This wave is an 'X-RAY'"<<endl;
    }
    else if (wl < 1E-11){
        cout<<"This wave is a 'Gamma Ray'"<<endl;
    }
    else
    cout<<"Sorry, not a valid wavelength!"<<endl;
}