#include <iostream>
#include <vector>
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
    // Deleting an element at a specific position
    // ------------------------------------------------------------

    // To delete an element, we shift all elements after it to the left and then reduce the logical size of the array


    cout << "Enter the position to delete the element: ";
    int pos;
    cin >> pos;

    if (n == 0)
    {
        cout << "Deletion cannot be performed as the array is empty" << endl;
    }
    else if (pos < 0 || pos >= n)
    {
        cout << "Invalid position" << endl;
    }
    else
    {
        // Left shifting elements
        for (int i = pos; i < n - 1; i++)
        {
            arr[i] = arr[i + 1];
        }

        n--; // Reducing the logical size

        cout << "The array after deletion:" << endl;
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
