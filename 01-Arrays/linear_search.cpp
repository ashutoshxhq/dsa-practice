#include <iostream>
using namespace std;

int main()
{

    int n, key;
    cin >> n;

    int a[1000];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << "Enter the element you want to search:";
    cin >> key;

    for (int i = 0; i < n; i++)
    {
        if (a[i] == key)
        {
            cout << "\nFount at index: " << i;
            break;
        }
    }

    return 0;
}