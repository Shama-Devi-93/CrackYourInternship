#include<bits/stdc++.h>
using namespace std;

// Return true, if reversing the subarray will
// sort the array, else return false.
bool checkReverse(int arr[], int n)
{
    // Copying the array.
    int temp[n];
    for (int i = 0; i < n; i++)
        temp[i] = arr[i];

    // Sort the copied array.
    sort(temp, temp + n);

    // Finding the first mismatch.
    int start;
    for (start = 0; start < n; start++)
        if (temp[start] != arr[start])
            break;

    // Finding the last mismatch.
    int end;
    for (end = n - 1; end >= 0; end--)
        if (temp[end] != arr[end])
            break;

    // If whole array is sorted
    if (start >= end)
        return true;

    // Checking subarray is decreasing or not.
    do
    {
        start++;
        if (arr[start - 1] < arr[start])
            return false;
    } while (start != end);

    return true;
}

int main()
{
    int arr[] = { 1, 2, 5, 4, 3 };
    int n = sizeof(arr)/sizeof(arr[0]);

    checkReverse(arr, n)? (cout << "Yes" << endl):
                          (cout << "No" << endl);
    return 0;
}
