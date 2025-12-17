#include<iostream>
#include<vector>
using namespace std;
int main()
{
    cout << "Enter the size of array: "; 
    int n;
    cin >> n;
    vector<int>num(n);
    cout << "Enter the elements of the array: " << endl;
    for(int i=0; i<n; i++)
    {
        cin >> num[i];
    }
    vector<int>pre_sum(n);
    pre_sum[0] = num[n-1];
    for(int i=1; i<n; i++)
    {
        pre_sum[i] = pre_sum[i-1] + num[n-i-1];
    }
    cout << "The calculated suffix sum of all elements:" << endl;
    for(int i=0; i<n; i++)
    {
        cout << pre_sum[i] << " ";
    }
    return 0;
}