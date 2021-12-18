#include <iostream>
using namespace std;

int LinearSearch(int arr[], int n, int key)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i;
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
         << "Enter " << n << " elements of array :";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter element for serch :";
    cin >> key;
    int index = LinearSearch(arr, n, key);
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
