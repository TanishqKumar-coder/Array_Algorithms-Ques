#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
int main()
{
    // ------------------------------------------------------------
    // Inputting the array
    // ------------------------------------------------------------

    cout << "Enter the size of array: ";
    int n;
    cin >> n;

    vector<int> arr(n, 0);

    cout << "Enter the array elements: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // ------------------------------------------------------------
    // Finding Min and Max elements of an array
    // ------------------------------------------------------------
    if(n == 0) 
    {
        cout << "Array is empty, cannot find min/max." << endl;
    }
    else
    {
        int max = INT_MIN; 
        int min = INT_MAX;
        for(int i=0; i<n; i++)
        {
            if(arr[i]>max)
            {
                max = arr[i]; //Comparing to check if current element is greater than the previous
            }
            if(arr[i] < min)
            {
                min = arr[i]; //Comparing to check if current element is smaller than the previous
            }
        }
        cout << "The max element in the array = " << max << endl;
        cout << "The min element in the array = " << min << endl;
    }
    return 0;
}