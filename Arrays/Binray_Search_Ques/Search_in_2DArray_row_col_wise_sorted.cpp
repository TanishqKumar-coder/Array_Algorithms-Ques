#include<iostream>
#include<vector>
using namespace std;
//The searching is done using two directions left and bottom

bool search(vector<vector<int> >&arr, int target)
{   
    // i - To iterate in rows & rows - The size of rows
    //j - To iterate in columns & cols - The of columns
    int rows = arr.size();
    int cols = arr[0].size();
    int i = 0;
    int j = cols-1;

    bool ans = false;

    while(i<=rows && j>=0)
    {
        if(target == arr[i][j])
        {
            ans = true;
            break;
        }
        else if(target < arr[i][j])
        {
            j--;
        }
        else i++;
    }

    return ans;
}

int main()
{
    cout << "Enter the size of matrix : ";
    int m,n;
    cin >> m >> n;
    vector<vector<int> >arr(m, vector<int>(n,0));
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << "Enter the key element : ";
    int key;
    cin >> key;
    cout << "The final output : " << endl;
    cout << search(arr, key);
}