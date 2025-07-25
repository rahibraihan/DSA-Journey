#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"enter the size of index: ";
    cin>>n;
    int arr[n];
    cout<<"enter the number of element: ";
    cin>>m;
    cout<<"enter the value of index: ";
    for(int i=0;i<m;i++){
       cin>>arr[i]; 
    }
    if(m>n){
        cout<<"Error:number of element cannot exceed array size ";
        return 1;
    }
    int posi;
    cout<<"enter the position for delete element: ";
    cin>>posi;
    if(posi<0 || posi>=m || posi%2==0){
        cout<<"invalid position:please enter the odd position: ";
        return 1;
    }
    for(int i=posi;i<m-1;i++){
        arr[i]=arr[i+1];
    }
    m--;
    cout<<"after deletation the element:";
    for(int i=0;i<m;i++){
        cout<<arr[i]<< " ";
    }
    return 0;

}