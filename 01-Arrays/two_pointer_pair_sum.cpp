#include <iostream>
#include <climits>
using namespace std;

void pair_sum(int a[], int n, int k)
{
    int i=0, j=n-1;
    while (a[i]+a[j] != k){
        if(a[i]+a[j] <k){
            i++;
        } 
        
        if(a[i]+a[j] >k){
            j--;
        }
    }

    cout<<"Elements are: "<<a[i]<<","<<a[j];
    
}


int main()
{
    int n, a[1000], k;

    cout << "Enter number of elements:";
    cin >> n;
    cout << "Enter sum element:";
    cin >> k;
    cout << "Enter all the elements:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    pair_sum(a, n, k);

    // print_arr(a, n);
    return 0;
}