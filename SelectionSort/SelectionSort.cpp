#include <iostream>
using namespace std;

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
void SelectionSort (int arr[] ,int length)
{  
 int min_idx  ;
 for (int iteration = 0 ; iteration < length -1 ; iteration++)    // remember in-place memory
 { 
    min_idx = iteration;
    for (int i = min_idx +1 ; i < length ; i++)
    {
       
        if(arr[i] <= arr[min_idx] ) min_idx = i;
    }    
    swap(arr[iteration], arr[min_idx]);    
 }
}
int main ()
{
    int a[] = {5, 2, 9, 1, 5, 6};
    SelectionSort(a , 6);
    for (int x : a) cout << x << " ";
}