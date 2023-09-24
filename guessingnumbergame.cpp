#include<iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    cout<<"Welcome to guessing number game! \n";
    char input;
    int num;
    cout<<endl;
    do 
    {
        srand(0);
        int variable=rand()%5+1;
        cout<<"Enter any number in between range 1 to 5 :";
        cin>>num;
        cout<<endl;
        if(num==variable)
        {
            cout<<"Congratulation! you guessed the correct number.    "<<endl;
        }
        else
        {
            cout<<"Sorry, You guessed wrong number try again.    "<<endl;
        }
        cout<<"Would you like to try again Y/N? ";
        cin>>input;
        cout<<endl;
    }
    while (input!='N');
    cout<<"Game end."<<endl;
    return 0;
}