#include<iostream>
using namespace std;

bool search(int arr[],int size,int key){
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            return 1;
        }
    }
    return 0;

}


int main(){
    int arr[]={22,33,44,-5,56,334,55};
    bool key;
    cout<<"enter searching element:";
    cin>>key;
    int found=search(arr,10,key);
    if(found){
        cout<<"key is present";
    }else{
        cout<<"key is absent";
    }
return 0;
}