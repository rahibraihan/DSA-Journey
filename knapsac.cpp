#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cout << "enter the number of item : ";
    cin >> n;
    vector<pair<int, int>> items;
    cout << "Give me value for" << "  " << n << " " << "items:";
    cout << endl;
    for (int i = 1; i <= n; i++)
    {
        int value, weight;
        cout << "give me value of item: " << " ";

        cin >> value;
        cout << endl;
        cout << "give me weight of item: " << " ";
        cin >> weight;
        cout << endl;
        items.push_back({value, weight});
    }
    int capacity;
    cout << "enter the capacity of bag:" << " ";
    cin >> capacity;
    for (int i = 0; i < n - 1; i++)
    {
        int best = i;
        for (int j = i + 1; j < n; j++)
        {
            int old_ratio = (double)items[best].first / (double)items[best].second; 
            int new_ratio = (double)items[best].first / (double)items[best].second;
            if (old_ratio < new_ratio)
            {
                best = j;
            }
        }
        swap(items[i], items[best]);
    }
    int profit = 0.0;
    int weight_taken = 0;
    for (int i = 0; i < n; i++)
    {
        int value_ = items[i].first;
        int weight_ = items[i].second;

        if (weight_taken + weight_ <= capacity)
        {
            weight_taken = weight_taken + weight_;
            profit = profit + value_;
            cout << "total weight:" << value_ << "  " << "total profit:" << " " << weight_ << endl;
        }
        else
        {
            int remaining = capacity - weight_taken;
            profit = profit + remaining * value_ / weight_;

            break;
        }
    }
    cout << endl;

    cout << "total weight taken:" << weight_taken;
    cout << endl;
    cout << "heighest profit:" << profit << endl;
    return 0;
}