#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;

void print_arr(int a[], int n)
{
    cout << "Sorted Array: ";

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}

// Comparator Function Defination for sorting in desc order
bool compare(int a, int b)
{
    return !(a < b);
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

    sort(a, a + n, compare);

    print_arr(a, n);
    return 0;
}