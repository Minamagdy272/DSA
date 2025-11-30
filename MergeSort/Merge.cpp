#include <iostream>
using namespace std;

int index = 0;

void Merge(const int r_arr[], int r, const int l_arr[], int l, int sorted_arr[])
{
    int i = 0;
    int k = 0;
    int idx = 0; // local write index

    // Merge while both arrays have elements
    while (i < r && k < l) {
        if (r_arr[i] <= l_arr[k]) {
            sorted_arr[idx++] = r_arr[i++];
        } else {
            sorted_arr[idx++] = l_arr[k++];
        }
    }

    // Copy remaining elements from r_arr (if any)
    while (i < r) {
        sorted_arr[idx++] = r_arr[i++];
    }

    // Copy remaining elements from l_arr (if any)
    while (k < l) {
        sorted_arr[idx++] = l_arr[k++];
    }

    index = idx; // set global if you rely on it elsewhere
}

int main()
{
    int r_arr[3] = {3, 5, 7};
    int l_arr[3] = {1, 2, 6};
    int arr[6];
    Merge(r_arr, 3, l_arr, 3, arr);

    // print merged array to verify
    for (int t = 0; t < 6; ++t) cout << arr[t] << " ";
    cout << endl;

    cout << "index = " << index << endl;
    return 0;
}
