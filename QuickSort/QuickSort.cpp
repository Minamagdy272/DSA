#include <iostream>
using namespace std;

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void QuickSort(int arr[], int Left, int Right)
{
    if (Left >= Right) return;

    int pivot = arr[Right];
    int i = Left;
    int j = Right - 1;

    while (i <= j)
    {
        while (arr[i] <= pivot && i <= Right - 1) i++;
        while (arr[j] > pivot && j >= Left) j--;

        if (i < j)
            swap(arr[i], arr[j]);
    }

    swap(arr[Right], arr[i]);

    QuickSort(arr, Left, i - 1);
    QuickSort(arr, i + 1, Right);
}

int main()
{
    int arr[9] = {23, 667, 12, 6782, 652, 666, 829, 1, 90};
    QuickSort(arr, 0, 8);

    for (int i = 0; i < 9; i++)
        cout << arr[i] << "  ";
}
