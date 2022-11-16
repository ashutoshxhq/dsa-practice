#include <iostream>
#include <climits>
using namespace std;

void max_sum_subarray(int a[], int n)
{
    int sum = 0, max_sum = 0, start_index = 0, end_index = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            sum = 0;
            for (int k = i; k <= j; k++)
            {
                sum += a[k];
            }

            if (sum > max_sum)
            {
                max_sum = sum;
                start_index = i;
                end_index = j;
            }
        }
    }

    cout<<"Max Sum:"<<max_sum<<endl;

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

    max_sum_subarray(a, n);

    // print_arr(a, n);
    return 0;
}