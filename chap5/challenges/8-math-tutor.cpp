#include<iostream>
#include <cstdlib>
using namespace std;
void menu();
void problem(int);
void result(int, int);
int main()
{
    int choice;

    do
    {
    
        menu();

        cout<<"\nEnter your choice: ";
        cin>>choice;

        while (choice < 1 || choice > 5){
            cout<<"Wrong choice!"<<endl;
            cout<<"\nEnter your choice: ";
            cin>>choice;
    }
        if (choice == 5){
            cout<<"Bye!"<<endl;
            break;
        }
    
        problem(choice);

        int answer;
        cout<<"Answer: ";
        cin>>answer;

        result(choice, answer);
    } while (true);
    
    return 0;
}

void menu()
{
    cout<<"\nChoose a problem from the following: "<<endl;
    cout<<
    "1. Addition"<<endl<<
    "2. Subtraction"<<endl<<
    "3. Multiplication"<<endl<<
    "4. Division"<<endl<<
    "5. Quit"<<endl;
}

void problem(int c)
{
    if (c == 1){
        cout<<"Q: 2561 + 1087"<<endl;
    }
    else if (c == 2){
        cout<<"Q: 8972 - 3647"<<endl;
    }
    else if (c == 3){
        cout<<"Q: 123 * 45"<<endl;
    }
    else if (c == 4){
        cout<<"Q: 6642 / 123"<<endl;
    }
}

void result(int c, int ans)
{
    const int answer1 = 3648;
    const int answer2 = 5325;
    const int answer3 = 5535;
    const int answer4 = 54;

    if ((c == 1 && ans == answer1) ||
        (c == 2 && ans == answer2) ||
        (c == 3 && ans == answer3) ||
        (c == 4 && ans == answer4)){
        cout<<"Correct Answer. Congratulations!"<<endl;
    }
    else
        cout<<"Wrong Answer!"<<endl;
}