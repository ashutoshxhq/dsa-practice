#include <iostream>
#include <climits>
using namespace std;

void max_sum_subarray_using_kadanes_algo(int a[], int n)
{
    int sum = 0, max_sum = 0, start_index = 0, end_index = 0;

    for (int i = 0; i < n; i++)
    {
        sum += a[i];
        if (sum + a[i] < 0)
        {
            sum = 0;
        }
        max_sum = max(sum, max_sum);
    }

    cout << "Max Sum:" << max_sum << endl;
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

    max_sum_subarray_using_kadanes_algo(a, n);

    // print_arr(a, n);
    return 0;
}