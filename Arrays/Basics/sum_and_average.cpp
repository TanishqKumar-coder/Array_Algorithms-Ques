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
    // Calculating Sum and Average of the complete array
    // ------------------------------------------------------------
    if(n == 0) 
    {
        cout << "Array is empty, cannot calculate sum/average." << endl;
    } 
    else 
    {
        double sum = 0;
        for(int i = 0; i < n; i++)
        {
            sum += arr[i];
        }
        //static_cast<double> converts the integer n to double in order to avoid any fractional issues
        double avg = sum / static_cast<double>(n);
        cout << "The sum of complete array = " << sum << endl;
        cout << "The average of complete array = " << avg << endl;
    }

    return 0;
}
