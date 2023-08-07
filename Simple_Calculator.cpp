#include<iostream>


using namespace std;


int main(){
    cout<<"This is a simple Calculator:"<<endl;
    double a , b;
    char c;
    cout<<"Enter two numbers:"<<endl;
    cin>>a>>b;
    cout<<"Enter the operation to be performed:"<<endl;
    cin>>c;
    if (c=='+'){
        cout<<a<<" + "<<b<<" = "<<a+b;
    }
    else if ( c=='-'){
        cout<<a<<" - "<<b<<" = "<<a-b;
    }
    else if ( c=='*'){
        cout<<a<<" * "<<b<<" = "<<a*b;
    }
    else if ( c=='/'){
        cout<<a<<" / "<<b<<" = "<<a/b;
    }    
    return 0;
}