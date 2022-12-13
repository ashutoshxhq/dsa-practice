#include <iostream>

using namespace std;

int main()
{
    int arr[1000][1000], m, n;
    cout << "Enter the length and bredth of matrix:\n";
    cin >> m >> n;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<"Enter element at "<<i<<", "<<j<<":\n";
            cin >> arr[i][j];
        }
    }

    cout << "The given matrix is:\n";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<arr[i][j]<<"   ";
        }
        cout<<"\n";
    }

    cout<<"Wave print of matrix is:\n";
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if (i%2==1){
                cout<<arr[m-j-1][i] <<"   ";
            } else{
                cout<<arr[j][i] <<"   ";
            }
        }
        cout<<"\n";
    }


    return 0;
}