#include<iostream>
#include<vector>
using namespace std;
void enque(vector<int>&arr,int n)
{
    if(arr.size() >= n){
        cout<<"\nqueue overflow.";
        return;
    }
    int elem;
    cin>>elem;
    arr.push_back(elem);
}
void deque(vector<int> &arr){
    if(arr.size()<=0){
        cout<<"\nqueue overflow.";
    }
    arr.pop_back();
}
void display(vector<int> &arr){
    int n=arr.size();
    cout<<"\nThe queue is:";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<"\t";
    }
}
int main(){
    int n;
    cout<<"\nEnter size of queue:";
    cin>>n;
    int fl=0;
    vector<int>queue;
    int ch;
    while (true)
    {
        cout<<"\nEnter:\n1 to enqueue\n2 to dequeue\n3 to display\n4 to exit\nEnter choice:\t";
        cin>>ch;
        switch (ch)
        {
        case 1:
            enque(queue,n);
            break;
        case 2:
            deque(queue);
            break;
        case 3:
            display(queue);
            break;
        case 4:
            


    }
    return 0;

}