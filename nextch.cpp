#include<iostream>

using namespace std;
int main(){
    cout<<"Write a program which accepts a character and display its next character"<<endl;
    char ch;
    cout<<"Enter a character"<<endl;
    cin>>ch;
    ch=++ch;
    cout<<"Display its next character"<<ch<<endl;
    return 0;
}