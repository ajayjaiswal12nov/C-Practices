#include<iostream>

using namespace std;

int swap(int a, int b){
    a = a+b;
    b = a-b;
    a = a-b;
    cout<<"value of a="<<a<<endl;
    cout<<"value of b="<<b<<endl;
    return 0;
}

int main() {

cout<<"Welcome"<<endl;
int a,b;
cout<<"Enter two numbers:"<<endl;
cin>>a;
cin>>b;
cout<<"return value of func swap "<<swap(a, b);
return 0;

}