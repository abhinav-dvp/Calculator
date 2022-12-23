#include <iostream>
using namespace std;

int main(){
    char op; // the operator
    float num1;
    float num2;
    cin>>op;
    cin>>num1;
    cin>>num2;
    switch(op){
        case ('+'):
            cout<<num1+num2;
            break;
        case ('-'):
            cout<<num1-num2;
            break;
        case ('*'):
            cout<<num1*num2;
            break;
        case ('/'):
            if (num2 && num1 != 0){
                cout<<num1/num2;
                break;
            }     
            else if (num2 = 0){
                cout<<"cannot divide by zero";
                break;
            }
            else if (num1 = 0){
                cout<<"0";
                break;
            }
        default:
			cout << "Error! operator is not correct";
			break;
    }
    return 0;
}