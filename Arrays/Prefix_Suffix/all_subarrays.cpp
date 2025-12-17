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
    cout << "The all subarrays of the given array are: " << endl;
    for(int i=0; i<n; i++)
    {
        for(int j=i; j<n; j++)
        {
            for(int k=i; k<=j; k++)
                {
                    cout << num[k] << " ";
                }
                cout << endl;
        }
    }
    return 0;
}