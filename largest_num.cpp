#include<iostream>

using namespace std;
int main(){
    cout<<"Swap two variables without using third variable"<<endl;
    int a;
    int b;
    int c;
    int greatest;
    cout<<"Enter any three numbers"<<endl;
    cin>>a;
    cin>>b;
    cin>>c;
    greatest = (a>b&&a>c)?a:(b>c)?b:c;

   

    cout<<greatest<<endl;
   
    return 0;
}