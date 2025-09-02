#include<iostream>
using namespace std;
int menuList(){
    int choice;
    cout<<"0.Exit"<<endl;
    cout<<"1.Addition"<<endl;
    cout<<"2.Substraction"<<endl;
    cout<<"Enter your choice:";
    cin>>choice;
    return choice;

}
int addition(int a,int b){
    int add=a+b;
    cout<<"Addition is :"<<add<<endl;
}
int substraction(int a,int b){
    int sub=a-b;
    cout<<"Substraction is :"<<sub<<endl;
}
int main(){
    int a;
    int b;
    cout<<"Enter two numbers:";
    cin>>a;
    cin>>b;
    int choice;
    while((choice=menuList())!=0){
        switch(choice){
            case 1:
                ::addition(a,b);
                break;

            case 2:
                ::substraction(a,b);
                break;
        }
    }

    return 0;
}