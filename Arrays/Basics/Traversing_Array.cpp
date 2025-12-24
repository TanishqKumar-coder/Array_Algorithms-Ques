// In this code, no extra functions are used to keep it completely basic and easy to understand

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // Creating an array of size 10 and initializing it with 0

    // The below block of code is to get the array size input from the user
    // Just uncomment, replace 10 with n, and run it :)

    // cout << "Enter the size of the array: ";
    // int n;
    // cin >> n;

    vector<int> arr(10, 0);
    // You can make your custom size array by replacing 10 with the desired value

    // Inputting elements in the array
    cout << "Enter the elements of the array: " << endl;
    for (int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }

    // Traversing through the array and printing it
    cout << "The elements in the array:" << endl;
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
