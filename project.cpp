#include<iostream>
using namespace std;
class calculator
{
    public:
    int add(double a,double b)
    {
        return(a+b);
    }
    int sub(double a,double b)
    {
        return(a-b);
    }
    int multiple(double a,double b)
    {
        return(a*b);
    }
    int division(double a,double b)
    {
        return(a/b);
    }
};
int main()
{
    system("cls");
    int choice;
    calculator c;
    double num1,num2;
    cout<<"\nenter the first number:";
    cin>>num1;
    cout<<"\nenter the second number";
    cin>>num2;
    cout<<"\n___________simple calculator______________";
    cout<<"\n 1.Add \n 2.subtract \n 3.multiply \n 4.division";
    cout<<"\n_________________________________________________";
    cout<<"\nenter your choice";
    cin>>choice;
    switch(choice)
    {
        case 1: cout<<c.add(num1,num2);break;
        case 2: cout<<c.sub(num1,num2);break;
        case 3: cout<<c.multiple(num1,num2);break;
        case 4: cout<<c.division(num1,num2);break;
        default:cout<<"invalid choice";
    }
    return 0;

}
