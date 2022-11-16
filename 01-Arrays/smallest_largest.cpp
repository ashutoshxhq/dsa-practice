#include <iostream>
#include <climits>
using namespace std;


int smallest_element(int a[], int n)
{
    int x = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if(a[i] < x){
            x = a[i];
        }
    }

    return x;
}

int largest_element(int a[], int n)
{
    int x = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if(a[i] > x){
            x = a[i];
        }
    }

    return x;
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

    cout<<"\nSmallest Element:"<<smallest_element(a, n);
    cout<<"\nLargest Element:"<<largest_element(a, n);

    return 0;
}
