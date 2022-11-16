#include <iostream>
#include <climits>
using namespace std;

void insertion_sort(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int j= i-1, e=a[i];
        while(j>=0 && (a[j] > e)) {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = e;
       
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

    insertion_sort(a, n);

    print_arr(a, n);
    return 0;
}