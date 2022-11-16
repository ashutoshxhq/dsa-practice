#include <iostream>
#include <climits>
using namespace std;

void max_sum_subarray_using_cumulative_sum(int a[], int n)
{
    int sum = 0, max_sum = 0, start_index = 0, end_index = 0;
    int cs[1000];
    for (int i = 1; i < n; i++)
    {
        cs[i] = cs[i - 1] + a[i];
    }

    for (int i = 1; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (max_sum < (cs[j] - cs[i - 1]))
            {
                max_sum = cs[j] - cs[i - 1];
                start_index = i;
                end_index = j;
            }
        }
    }

    cout << "Max Sum:" << max_sum << endl;

    for (int i = start_index; i <= end_index; i++)
    {
        cout << a[i] << " ";
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

    max_sum_subarray_using_cumulative_sum(a, n);

    // print_arr(a, n);
    return 0;
}