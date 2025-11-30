#include <iostream>
using namespace std;



void Merge(const int l_arr[], int l, const int r_arr[], int r, int sorted_arr[])
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

   //ndex = idx; // set global if you rely on it elsewhere
}


void MergeSort(int arr[],int length , int sorted_arr[])
{
 if (length ==1 )         // base condition
 {
    sorted_arr[0] = arr[0];
 }
 int half_length = length /2 ;
 int right_length = length - half_length;
 int *l_arr = new int[half_length];
 int *l_sorted_arr = new int[half_length];
 int *r_arr = new int[right_length];
 int *r_sorted_arr = new int[right_length];

 for (int i = 0 ; i< half_length ; i++)
 {
    l_arr[i] = arr[i];
 }
 for (int j = 0 ; j < right_length ; j ++)
 {
    r_arr[j] = arr[half_length+j];
    //i++;
 }
 MergeSort(l_arr,half_length, l_sorted_arr );
 MergeSort(r_arr,right_length, r_sorted_arr );
 Merge(l_sorted_arr,half_length , r_sorted_arr,right_length,sorted_arr );
 delete [] l_arr;
 delete [] r_arr;
 delete [] l_sorted_arr;
 delete [] r_sorted_arr;
}

int main()
{
  int arr [9] = {23545,55,85,445,33,1,2,5,7};
  int sorted_arr[9];
  MergeSort(arr,9,sorted_arr);
  for ( int i = 0 ; i < 9 ; i++)
  {
    cout << sorted_arr[i]<< "  ";
  }
  return 0 ;
}
