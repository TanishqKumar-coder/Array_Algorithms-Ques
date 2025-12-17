#include <iostream>
#include <algorithm>
using namespace std;

int partition(int arr[], int start, int end)
{
    int pivot = arr[end];
    int pos = start;

    for(int i = start; i < end; i++)
    {
        if(arr[i] <= pivot)
        {
            swap(arr[i], arr[pos]);
            pos++;
        }
    }

    swap(arr[pos], arr[end]);  // pivot to correct position
    return pos;
}

void quicksort(int arr[], int start, int end)
{
    if(start >= end)
        return;

    int pivot = partition(arr, start, end);
    
    quicksort(arr, start, pivot - 1);
    quicksort(arr, pivot + 1, end);
}

int main()
{
    int n;
    cout << "Enter the size of array :" << endl;
    cin >> n;

    int a[n];
    cout << "Enter the elements of the array :" << endl;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    quicksort(a, 0, n - 1);

    for(int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}
