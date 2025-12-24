//Note- In this code target element means the element to be searched

#include<iostream>
#include<vector>
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
    // Searching the target element
    // ------------------------------------------------------------
    cout << "Enter the target element: ";
    int target;
    cin >> target;
    //Creating a position variable to store position of target if found
    int pos=-1;
    //Traversing through whole array to find target
    for(int i=0; i<n; i++)
    {
        //Breaking the loop if target is found
        if(target==arr[i])
        {
            pos = i;
            break;
        }
    }
    if(pos >=0)
    {
        cout <<"The target is found at index: " << pos << endl;
    }
    else
    {
        cout << "The target cannot be found"<<endl;
    }
    return 0;
}