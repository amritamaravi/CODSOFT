#include<iostream>
using namespace std;

int main()
{
    double num1, num2;
    int result;
    char op;
    cout<<"Enter the number 1: ";
    cin>>num1;
    cout<<"Enter the Operator(+ - * / ) : ";
    cin>>op;
    cout<<"Enter the number 2 :";
    cin>>num2;
    switch (op)
    {
        case '+':
        cout<< num1 << op << num2 << " = " << num1 + num2 <<endl;
        break;
        case '-':
        cout<< num1 << op << num2 <<" = " << num1 - num2 <<endl;
        break;
        case '*':
        cout<< num1 << op << num2 <<" = "<< num1 * num2 <<endl;
        break;
        case '/':
        if (num2==0.0)
        {
            cout<<"Divide by Zero situation "<<endl;
        }
        else
        {
        cout<< num1 << op << num2 << " = " << num1 / num2 <<endl;
        }
        break;

        default:
        cout<<"invalid operator"<<endl;
        break;
    }
return 0;
}
