#include <iostream>
using namespace std;
int binarysearch(int arr[], int n, int key)
{
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if(key < arr[mid])
        {
            end = mid - 1;
        }
        else if(key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            return mid;
        }   
    }
    return -1; 
}
int main()
{
    int n, key;
    int arr[n];
    cout << "Enter number elements in array :";
    cin >> n;
    cout << endl
         << "Enter " << n << "sorted elements of array :";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter element for serch :";
    cin >> key;
    int index = binarysearch(arr, n, key);
    if (index == -1)
    {
        cout << "Element is not present in array " << endl;
    }
    else
    {
        cout << "Element is present at index " << index << endl;
    }
    return 0;
}