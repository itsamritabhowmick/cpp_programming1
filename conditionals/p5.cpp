#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter a and b and c";
    cin>>a>>b>>c;
    if(a==b && b==c){
        cout<<"a,b,c are same";
    }
    else{
        if(a>b){
            if(a>c){
                cout<<"\na is greater";
            }
            else{
                cout<<"\nc is greater";
            }
        }
        else{
            if(b>c){
                cout<<"\nb is greater";
            }
            else{
                cout<<"\nc is greater";
            }
        }
    }
    return 0;
}