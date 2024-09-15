#include<iostream>
#include<vector>
using namespace std;
void push(vector<int>&arr,int n)
{
    if(arr.size() >= n){
        cout<<"\nStack overflow.";
        return;
    }
    int elem;
    cin>>elem;
    arr.push_back(elem);
}
void pop(vector<int> &arr){
    if(arr.size()<=0){
        cout<<"\nstack underflow.";
    }
    arr.pop_back();
}
void display(vector<int> &arr){
    int n=arr.size();
    cout<<"\nThe stack is:";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<"\t";
    }
}
int main(){
    int n;
    cout<<"\nEnter size of stack:";
    cin>>n;
    int fl=0;
    vector<int>stack;
    int ch;
    while (true)
    {
        cout<<"\nEnter:\n1 to push\n2 to pop\n3 to display\n4 to exit\nEnter choice:\t";
        cin>>ch;
        switch (ch)
        {
        case 1:
            push(stack,n);
            break;
        case 2:
            pop(stack);
            break;
        case 3:
            display(stack);
            break;
        case 4:
            fl=1;
            break;
        }
        if(fl==1){
            break;
        }
    }
    return 0;

}