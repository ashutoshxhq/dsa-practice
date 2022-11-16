#include <iostream>
#include <climits>
using namespace std;

// Comparator Function Defination for sorting in desc order
bool compare(int a, int b)
{
    return a > b;
}

void bubble_sort(int a[], int n, bool (&cmp)(int a, int b))
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (cmp(a[j], a[j + 1]))
            {
                swap(a[j], a[j + 1]);
            }
        }
    }
}

void print_arr(int a[], int n)
{
    cout << "Sorted Array: ";

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
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

    bubble_sort(a, n, compare);

    print_arr(a, n);
    return 0;
}