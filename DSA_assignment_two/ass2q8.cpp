#include <iostream>
using namespace std;

int main()
{
    int arr[] = {5, 2, 7, 2, 4, 7, 8, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        bool isNew = true;
        for (int j = 0; j < i; j++)
        {
            if (arr[i] == arr[j])
            {
                isNew = false;
                break;
            }
        }
        if (isNew)
            count++;
    }

    cout << "Total distinct elements: " << count;
    return 0;
}