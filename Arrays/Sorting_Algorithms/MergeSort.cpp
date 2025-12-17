#include<iostream>
#include<vector>
using namespace std;

//This function sorts and merges the divided array while back-tracking the mergesort function
void merge(int x[], int start, int mid, int end)
{
    vector<int> temp(end - start + 1);   // ← replaced VLA with vector
    int left = start, right = mid+1, index=0;

    //This loop is to compare the divided array elements and store them sortedly
    while(left <= mid && right <=end)
    {
        if(x[left]<=x[right])
        {
            temp[index] = x[left];
            left++; index++;
        }
        else
        {
            temp[index] = x[right];
            right++; index++;
        }
    }

    //This loop is to fill the elements if left any in the "left array"
    while(left <= mid)
    {
        temp[index] = x[left];
        left++; index++;
    }

    //This loop is to fill the elements if left any in the "right array"
    while(right <= end)
    {
        temp[index] = x[right];
        right++; index++;
    }

    //This loop is to store the sorted elements in the original array
    index = 0;
    while(start <= end)
    {
        x[start] = temp[index];
        index++; start++;
    }
}

//This function divides the aray into two parts
void mergeSort(int x[], int start, int end)
{
    if(start == end)
        return;
    else
    {
        int mid = start + (end-start)/2;
        mergeSort(x, start, mid);
        mergeSort(x, mid+1, end);
        merge(x, start, mid, end);
    }
}

int main()
{
    cout << "Enter the size of array:" << endl;
    int n;
    cin >> n;
    int i;
    cout << "Enter the elements of the array" << endl;
    int a[n];
    for(i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    mergeSort(a, 0, n-1);

    for(i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}
