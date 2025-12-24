//Insertion at end and at specified, this code contains both, :)

// In this code, Key or key element means the element to be inserted

// Note: 0 is treated as an empty space (for demonstration purposes)

#include <iostream>
#include <vector>
using namespace std;

// Function to input array elements
void inputArray(vector<int> &v, int elements)
{
    for (int i = 0; i < elements; i++)
    {
        cin >> v[i];
    }
}

// Function to print array elements
void printArray(const vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main()
{
    // ------------------------------------------------------------
    // Inserting an element at the end of the array
    // ------------------------------------------------------------

    vector<int> arr(10, 0);

    cout << "Enter the array elements (9 elements):" << endl;
    inputArray(arr, 9);

    cout << "The original array: ";
    printArray(arr);

    cout << "Enter the key value to be inserted at the end of the array: ";
    int key;
    cin >> key;

    if (arr[9] == 0)
    {
        arr[9] = key;
        cout << "The array after insertion at the end: ";
        printArray(arr);
    }
    else
    {
        cout << "The array is full (insertion cannot be performed)." << endl;
    }

    // ------------------------------------------------------------
    // Inserting an element at a specific position
    // ------------------------------------------------------------

    vector<int> a(10, 0);

    cout << "\nEnter the array elements (9 elements):" << endl;
    inputArray(a, 9);

    cout << "The original array: ";
    printArray(a);

    cout << "Enter the key value and the position to insert: ";
    int Key, pos;
    cin >> Key >> pos;

    if (pos < 0 || pos >= a.size())
    {
        cout << "Invalid position!" << endl;
        return 0;
    }

    int n = a.size() - 1;

    while (n > pos)
    {
        a[n] = a[n - 1];
        n--;
    }

    a[pos] = Key;

    cout << "The array after insertion: ";
    printArray(a);

    return 0;
}
