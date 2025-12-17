#include<iostream>
#include<vector>
using namespace std;
void divide(vector<int> &num, int n, int sum)
{
    int ans = 0;
    int prefix=0;
    for(int i=0; i<n-1; i++)
    {
        prefix += num[i];
        if(prefix == sum-prefix)
        {
            ans++;
            break;
        }
    }
    if(ans)
    {
        cout << "The array can be divided into two subarray of equal sum" ;
    }
    else{
    cout << "Array cannot be divided into two subarrays of equal sum";
    }
}
int main()
{
    cout << "Enter the size of array: "; 
    int n;
    cin >> n;
    vector<int>num(n);
    int sum = 0;
    cout << "Enter the elements of the array: " << endl;
    for(int i=0; i<n; i++)
    {
        cin >> num[i];
    }
    for(int i=0; i<n;i++)
    {
        sum += num[i];
    }
    divide(num, n, sum);
    return 0;
}