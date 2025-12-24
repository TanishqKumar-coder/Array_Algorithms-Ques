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
    // Deleting an element at the end of the array
    // ------------------------------------------------------------

    // To delete the last element of the array, we reduce the logical size
    // This effectively ignores the last element

    if (n > 0)
    {
        n--;
        cout << "The array after deleting last element: " << endl;
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    else
    {
        cout << "Deletion cannot be performed" << endl;
    }

        return 0;
}
