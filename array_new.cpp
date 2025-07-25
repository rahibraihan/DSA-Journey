#include <iostream>
using namespace std;
int main()
{
    int i, size;
    cout << "enter the number of index:";
    cin >> size;
    cout << "enter the number of element:";
    cin >> i;

    int arr[size];
    cout << "take the value of index:";

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "print the even index value: ";
    for (int i = 0; i < size; i = i + 2)
    {
        cout << arr[i] << endl;
    }
    return 0;
}