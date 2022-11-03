//This is a code to print febinaci number at any given position
#include<iostream>

using namespace std;

int febi(int n) {
    if(n<2) {
        return 1;
    }
    return febi(n-2) + febi(n-1);
}

int main() {

    int a;
    cout<<"Enter a integer value";
    cin>>a;
    cout<<"The fabinaci series number at position "<<a<<" is "<<febi(a)<<endl;
    return 0;

}