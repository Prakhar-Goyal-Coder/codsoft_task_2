#include<iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"enter two number "<<endl;
    cin>>x>>y;
    char op;
    cout<<endl<<"enter operator"<<endl;
    cin>>op;
    cout<<endl;
    if(op=='+'){
        cout<<x+y;
    }
    else if(op=='-'){
        cout<<x-y;
    }
    else if(op=='*'){
        cout<< x*y;
    }
    else if(op=='/'){
        cout<<x/y;
    }
    return 0;
}