#include <bits/stdc++.h>
using namespace std;

void selection_sort(int arr[],int n)
{
   
    for (int i = 0; i <=n - 2; i++)
    {

        int mini = i;
        for (int j = i; j <= n - 1; j++)
        {
            if (arr[j] <= arr[mini])
                mini = j;
        }
        // int temp;
        // temp = arr[mini];
        // arr[mini]= arr[i];
        // arr[i]= temp;
         swap(arr[i], arr[mini]);
    }
}

int main()
{

    int arr[6] = {6,4,5,2,8,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    selection_sort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}