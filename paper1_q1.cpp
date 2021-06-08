//PAPER 1 QUESTION 1
//PROGRAM TO FIND SMALLEST AND SECOND SMALLEST ELEMENT IN ARRAY
#include <bits/stdc++.h>
using namespace std; 

void GetSmallest(int arr[], int arr_size)
{
    int first, second;

    first = second = INT_MAX;
    for (int i = 0; i < arr_size ; i ++)
    {
        if (arr[i] < first)
        {
            second = first;
            first = arr[i];
        }
        else if (arr[i] < second && arr[i] != first)
            second = arr[i];
    }

        cout << "The smallest element is " << first << " and second smallest element is " << second << endl;
}

int main()
{
    int arr[] = {12, 13, 1, 10 ,34, 1};
    int smallest = sizeof(arr)/sizeof(arr[0]);
    GetSmallest(arr, smallest);
    return 0;
}
 
