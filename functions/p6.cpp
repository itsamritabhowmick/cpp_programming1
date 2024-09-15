#include<iostream>
#include<cmath>
using namespace std;
int power(int d, int c){
    int res=1;
    for (int i = 1; i <=c; i++)
    {
        res=res*d;
    }
    return res;   
}
int count(int n){
    int t=n;int count=0;
    while(t>0){
        int d=t%10;
        count++;
        t=t/10;
    }
    return count;
}
int armstrong(int n)
{
    int t=n;
    int sum=0;
    int c=count(n);
    while(t>0){
        int d=t%10;
        int x=power(d,c);
        sum = sum+x;
        t=t/10;
    }
    return sum;
}
int main(){
    int n;
    cout<<"\nEnter n:";
    cin>>n;
    int res=armstrong(n);
    if(res==n){
        cout<<n<<" is a armstrong number";
    }
    else{
        cout<<n<<" is not a armstrong number";
    }
    return 0;
}