#include<iostream>
using namespace std;
int main(){
    int n,d,e,t,arr[100],position;
    cout<<"enter the number of elment:";
    cin>>n;
    cout<<"enter the "<< n << " integer: ";
    for(e=0;e<n;e++){
        cin>>arr[e];
    }
    for(e=0;e<n-1;e++){
        position=e;
        for(d=e+1;d<n;d++){
            if(arr[position]>arr[d]){
                position=d;
            }
        }if(position!=e){
            t=arr[e];
            arr[e]=arr[position];
            arr[position]=t;
        }
    }
    cout<<"after sorting the array:"<<endl;
    for(int e=0;e<n;e++){
        cout<<arr[e]<<" ";
    }
}