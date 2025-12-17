#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of array";
    cin >> n;
    vector<int>a(n);
    int i,start=0, end = n-1;;
    cout << "Enter the 0s and 1s in the array";
    for(i=0; i<n; i++)
    {
        cin >> a[i];
    }
    while(start < end)
    {
        if(a[start] == 0)
        {
            start++;
        }
        else
        {
            if(a[end] == 0)
            {
                a[end] = 1;
                a[start] = 0;
                end--;
                start++;
            }
            else{
                end--;
            }
        }
    }
    cout << "The sorted array is :" << endl;
    for(i=0; i<n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}