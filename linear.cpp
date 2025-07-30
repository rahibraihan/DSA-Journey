#include <iostream>
using namespace std;
int main()
{
    int n, size;
    cout << "enter the number of array size:";
    cin >> size;
    int arr[size];
    cout << "enter the number of element:";
    cin >> n;
    cout << "enter the value of array:";
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int idx = -1, key;
    cout << "enter the searching element:";
    cin >> key;
    for (int i = 0; i < n; i++){
        if (key == arr[i])
        {
            idx = i;
            break;
        }
    }
    if (key != -1){
        cout << "we are found the searching element:" << key << " index number is:" << idx;
    }
    else{
        cout << "not found//";
    }
    return 0;
}