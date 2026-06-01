#include <iostream>

using namespace std;

int main()
{
    double num1,num2;
    char oper;
    cout<<"welcome to the c++ calculator!"<<endl;
    cout<<"Enter first number:"<<endl;
    cin>>num1;
    cout<<"Enter operation(+,-,*,/):"<<endl;
    cin>>oper;
    cout<<"Enter second number:"<<endl;
    cin>>num2;
    switch (oper){
    case '+' : cout << "Result: " << num1 << " + " << num2 << " = " <<(num1 + num2) << endl;
    break;
    case '-' : cout << "Result: " << num1 << " - " << num2 << " = " <<(num1 - num2) << endl;
    break;
    case '*' : cout << "Result: " << num1 << " * " << num2 << " = " <<(num1 * num2) << endl;
    break;
    case '/' :
        if(num2!=0){
                cout << "Result: " << num1 << " / " << num2 << " = " <<(num1 / num2) << endl;
                }
                else {
          cout << "Error: Devision by zero is not allowed!" << endl;
          }
    break;
    default: cout << "Error: invalid operator!" << endl;
    break;

}
}
