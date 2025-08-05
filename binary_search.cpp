#include<iostream>
using namespace std;
int main(){
    int size,n;
    cout<<"enter the array size:";
    cin>>size;
    int arr[size];
    cout<<"enter the number of array:";
    cin>>n;
    cout<<"enter the number of element:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cout<<"enter the searching value: ";
    cin>>key;
    int start=0;
    int end=n-1;
    int result=-1;
    while(start<=end){
        int mid=start+end/2;
        if(arr[mid]==key){
            result=mid;
            break;
        }
        else if(arr[mid]<key){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    if(result!=-1){
        cout<<"element found is index:"<< result;
    }else{
        cout<<"elment not found!";
    }
    return 0;
}