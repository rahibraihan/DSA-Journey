#include<iostream>
using namespace std;
int main(){
    int n,size;
    cout<<"enter the number of array size:";
    cin>>size;
    int arr[size];
    cout<<"enter the number of array element:";
    cin>>n;
    cout<<"enter the value of array:"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
        
        }
        cout << "after sorting the array:" << endl;
        for (int i = 0; i < n; i++){
            cout << arr[i]<<"  ";
        }
    cout<<endl;
    return 0;
}