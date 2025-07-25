#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"enter the element number:";
    cin>>n;
    int arr[n];
    cout<<"enter the element number:";
    cin>>m;
    cout<<"enter the value of indeex element:";
    for(int i=0;i<m;i++){
        cin>>arr[i];
    }
    if(m>n){
        cout<<"error:number of element cannot exceed the array size";
        return 1;
    }
    if(m==n){
        cout<<"insertion not possible,array is already full";
        return 1;
    }
    int posi,newelm;
    cout<<"Enter the position where you insert the new element:";
    cin>>posi;
    if(posi>m || posi<0){
        cout<<"invalid number";
        return 1;
    }
    for(int i=m;i>posi;i--){
        arr[i]=arr[i-1];

    }
    cout<<"enter the newelement:";
    cin>>newelm;
    arr[posi]=newelm;
    m++;
    cout<<"After the insertion:";
    for(int i=0;i<m;i++){
        cout<<arr[i]<<" ";
    }
    return 0;

}
