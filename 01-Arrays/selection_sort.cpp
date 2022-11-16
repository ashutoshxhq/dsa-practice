#include <iostream>
#include <climits>
using namespace std;

int min_element_index(int arr[], int n)
{
    int selected = INT_MAX, selected_index = -1;

    return selected_index;
}

void selection_sort(int arr[], int n)
{

    for (int i = 0; i < n - 1; i++)
    {
        int min_index = i;

        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min_index])
            {
                min_index = j;
            }
        }
        swap(arr[i], arr[min_index]);
    }
    cout << "Sorted Array:";

    for (int i = 0; i < n; i++)
    {
        cout << endl
             << arr[i] << " ";
    }
}

int main()
{
    int n, a[1000];

    cout << "Enter number of elements:";
    cin >> n;
    cout << "Enter all the elements:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    selection_sort(a, n);

    return 0;
}