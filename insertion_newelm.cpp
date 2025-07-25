#include <iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"enter the number of index:";
    cin>>n;
    int arr[n];
    cout<<"enter the number of element:";
    cin>>m;
    cout<<"enter the index value:";
    for(int i=0;i<m;i++){
        cin>>arr[i];
    }if(m>n){
        cout<<"Error:number of element not excced the index number";
        return 1;
    }
    if(m==n){
        cout<<"insertaion not possible,array is full";
        return 1;
    }
    int posi,newelm;
    cout<<"enter the position where you insert new element:";
    cin>>posi;
    cout << "enter the new element value:";
    cin >> newelm;
     if (posi > m || posi < 0)
    {
        cout<<"invalid number";
        return 1;
    }
    for(int i=m;i>posi;i--){
        arr[i]=arr[i-1];
    }
    arr[posi]=newelm;
    m++;
    for(int i=0;i<m;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}